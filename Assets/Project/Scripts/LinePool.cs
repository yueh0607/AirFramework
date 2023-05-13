using AirFramework;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class LinePool : AbstractPool<LineRenderer>
{

    public static LinePool Instance=>SingletonProperty<LinePool>.Instance;



    GameObject empty;
    public LinePool()
    {
        empty = new("LinePool");
        GameObject.DontDestroyOnLoad(empty);
    }

    public override void OnAllocateItem(LineRenderer item)
    {
        item.gameObject.SetActive(true);
    }

    public override LineRenderer OnCreateItem()
    {
        var go = new GameObject("LineRenderer(PoolItem)");
        go.transform.SetParent(empty.transform);
        var line = go.AddComponent<LineRenderer>();
        line.AddComponent<LineCollider>();
        return line;
    }

    public override void OnDestroyItem(LineRenderer item)
    {
        GameObject.Destroy(item.gameObject);
    }

    public override void OnRecycleItem(LineRenderer item)
    {
        item.gameObject.SetActive(false);
        item.positionCount= 0;
        item.transform.SetParent(empty.transform);
        item.transform.position= Vector3.zero;
        
    }


}
