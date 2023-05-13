using AirFramework;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.UIElements;

public class ZoneRenderer : MonoBehaviour
{
    //public Transform temp;

    private List<LineRenderer> lrs = new List<LineRenderer>();

    private List<LineRenderer> girds = new List<LineRenderer>();

    private float cellSize = 1;
    private ZoneData data;
    private float similarDistance = 0.4f;
    private bool inEditor = false;

    public void Initialize(int count, bool inEditor = true)
    {
        data = new(1f, count);
        this.inEditor = inEditor;
    }


    LineRenderer tempLine;
    bool mouseState = false;
    Vector3 startIndexPos;
    private void Update()
    {
        if (!inEditor) return;

        Vector3 localpos = GetLocalPos(Input.mousePosition);
        Vector3 indexpos = GetIndexPos(localpos);
        Vector3 girdpos = GetGirdPos(indexpos);

        bool similar = InSimilarPoint(localpos, girdpos);


        //鼠标是否按下
        if (Input.GetMouseButton(0))
        {
            if (!mouseState)
            {
                if (similar)
                {

                    mouseState = true;
                    tempLine = LinePool.Instance.Allocate();
                    SetTerrianLine(tempLine);
                    tempLine.SetPosition(0, girdpos);
                    tempLine.SetPosition(1, localpos);
                    startIndexPos = indexpos;
                }
            }
            else
            {
                if (similar)
                {
                    tempLine.SetPosition(1, girdpos);
                }
                else
                {
                    tempLine.SetPosition(1, localpos);
                }
            }

        }
        else
        {

            if (mouseState)
            {
                mouseState= false;
                LinePool.Instance.Recycle(tempLine);

                if (similar)
                {
                    if (data[indexpos] != data[startIndexPos])
                    {
                        data.AddConnection(startIndexPos, indexpos);
                    }
                    ClearLRS();
                    DrawTerrianLine(data);
                } 



            }
            

        }

    }

    private void Awake()
    {
        Initialize(11, true);

        //data.AddConnection(Vector2.zero, new Vector2(4,4));
        //data.AddConnection(new Vector2(1,0), new Vector2(5,4));
        //DrawTerrianLine(data);

        DrawGird(data);
    }


    Vector3 GetLocalPos(Vector3 mousePos)
    {
        //置空z轴
        mousePos = new Vector3(mousePos.x, mousePos.y, 0);
        //转换到世界坐标系
        mousePos = (Vector2)Camera.main.ScreenToWorldPoint(mousePos);
        //转换到Zone坐标系
        var localpos = transform.InverseTransformPoint(mousePos);

        return localpos;
    }

    Vector3 GetIndexPos(Vector3 localpos) => localpos / data.BoxSize;
    Vector2 GetGirdPos(Vector3 indexPosition)
    {
        return data[indexPosition];
    }

    bool InSimilarPoint(Vector3 localPos, Vector3 girdPos)
    {

        //求索引系标准点和Zone系位置距离
        float dictance = Vector2.Distance(localPos, girdPos);
        //小于阈值则近似相等
        if (dictance > similarDistance)
        {
            return false;
        }

        return true;
    }

    void SetTerrianLine(LineRenderer renderer)
    {

        renderer.transform.SetParent(this.transform);
        renderer.transform.position = Vector3.zero;
        renderer.widthMultiplier = 0.1f;

    }


    void SetGirdLine(LineRenderer renderer)
    {
        renderer.widthMultiplier = 0.05f;

    }
    public void DrawTerrianLine(ZoneData zd)
    {

        int count = zd.LineCount;
        lrs.Capacity = Mathf.Max(count, lrs.Capacity);

        var lines = zd.GetLines();
        foreach (var line in lines)
        {
            var renderer = LinePool.Instance.Allocate();
            lrs.Add(renderer);
            SetTerrianLine(renderer);
            var xxx = zd[line.Key];
            var st = (Vector3)xxx;
            renderer.SetPosition(0, st);
            renderer.SetPosition(1, (Vector3)zd[line.Value]);
            renderer.GetComponent<LineCollider>().CreateCollider();
        }
    }

    private void DrawGird(ZoneData zd)
    {
        int count = zd.BoxCount;

        girds.Capacity = Mathf.Max(count << 2, girds.Capacity);
        //网格绘制
        for (int i = 0; i < count; i++)
        {
            var line = LinePool.Instance.Allocate();
            girds.Add(line);

            line.transform.SetParent(this.transform);
            line.transform.position = Vector3.zero;
            SetGirdLine(line);

            line.SetPosition(0, zd[i, 0]);
            line.SetPosition(1, zd[i, zd.BoxCount - 1]);


        }
        for (int i = 0; i < count; i++)
        {
            var line = LinePool.Instance.Allocate();
            girds.Add(line);

            line.transform.SetParent(this.transform);
            line.transform.position = Vector3.zero;
            SetGirdLine(line);

            line.SetPosition(0, zd[0, i]);
            line.SetPosition(1, zd[zd.BoxCount - 1, i]);


        }


    }

    public void ClearLRS()
    {
        foreach (var line in lrs)
        {
            line.GetComponent<LineCollider>().RemoveCollider();
            LinePool.Instance.Recycle(line);
        }
        lrs.Clear();
    }

    public void ClearGRS()
    {
        foreach (var line in girds)
        {
            LinePool.Instance.Recycle(line);
        }
        girds.Clear();
    }
}
