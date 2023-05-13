using AirFramework;
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using UnityEngine;


/// <summary>
/// 存储一个Zone的信息
/// </summary>
public class ZoneData : Unit
{
    /// <summary>
    /// 格子尺寸
    /// </summary>
    public float BoxSize { get; private set; }

    /// <summary>
    /// 格子数
    /// </summary>
    public int BoxCount { get; private set; }

    /// <summary>
    /// 坐标集合，代表是从0，0开始的原始坐标递增序列
    /// </summary>
    public Vector2[,] Positions { get; private set; }

    /// <summary>
    /// 整体坐标偏移
    /// </summary>
    public Vector2 Offest { get; set; } = Vector2.zero;

    /// <summary>
    /// 线列表，记录哪些点直接产生连线
    /// </summary>
    private readonly List<KeyValuePair<Vector2, Vector2>> Lines = new();
    /// <summary>
    /// 线的数量
    /// </summary>
    public int LineCount =>Lines.Count;

    /// <summary>
    /// 在两个点之间添加连接
    /// </summary>
    /// <param name="start"></param>
    /// <param name="end"></param>
    public void AddConnection(Vector2 start,Vector2 end)
    {
        Lines.Add(new KeyValuePair<Vector2, Vector2>(start,end));
    }

    /// <summary>
    /// 移除某个连接
    /// </summary>
    /// <param name="start"></param>
    /// <param name="end"></param>
    public void RemoveConnection(Vector2 start, Vector2 end) => Lines.Remove(new KeyValuePair<Vector2, Vector2>());

    /// <summary>
    /// 获取线列表
    /// </summary>
    /// <returns></returns>
    public List<KeyValuePair<Vector2, Vector2>> GetLines() => Lines;    



    /// <summary>
    /// 格子尺寸，格子数
    /// </summary>
    /// <param name="boxSize"></param>
    /// <param name="boxCount"></param>
    public ZoneData(float boxSize, int boxCount)
    {

        BoxSize = boxSize;
        BoxCount = boxCount;
        Positions = new Vector2[boxCount, boxCount];
        RefreshAll();

    }

    /// <summary>
    /// 访问的坐标带有偏移
    /// </summary>
    /// <param name="x"></param>
    /// <param name="y"></param>
    /// <returns></returns>
    public Vector2 this[int x, int y]
    {
        get
        {
            return Positions[x, y] + Offest;
        }
    }

    /// <summary>
    /// 访问带有Offest的坐标，浮点数自动修正，自动修正到Range内最接近的坐标
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    public Vector2 this[Vector2 index]
    {
        get
        {
            int x = Mathf.RoundToInt(index.x);
            int y = Mathf.RoundToInt(index.y);
            if(x<0) x = 0;
            if(x>BoxCount-1) x = BoxCount-1;
            if (y < 0) y = 0;
            if(y>BoxCount-1) y = BoxCount-1;
            return Positions[x, y] + Offest;
        }
    }



    /// <summary>
    /// (0,0)
    /// </summary>
    public Vector2 LeftBottom => this[0, 0];
    /// <summary>
    /// (0,T)
    /// </summary>
    public Vector2 LeftTop=> this[0, BoxCount-1];
    /// <summary>
    /// (T,T)
    /// </summary>
    public Vector2 RightTop => this[BoxCount-1, BoxCount - 1];
    /// <summary>
    /// (T,0)
    /// </summary>
    public Vector2 RightBottom => this[BoxCount - 1,0];

    /// <summary>
    /// 调用以更改Size
    /// </summary>
    /// <param name="size"></param>
    public void ChangeSize(float size)
    {
        BoxSize = size;
        RefreshSize();
    }
    /// <summary>
    /// 调用更改Count
    /// </summary>
    /// <param name="count"></param>
    public void ChangeCount(int count)
    {
        BoxCount = count;
        RefreshAll();
    }

    /// <summary>
    /// 判断位置是不是合法性，需要传一个原点与BoxCount组成的区域的索引点才返回true,不带浮点修正，只检测边界
    /// </summary>
    /// <param name="index_pos"></param>
    /// <returns></returns>
    public bool IndexPosInMap(Vector2 index_pos)
    {
        if (index_pos.x < BoxCount && index_pos.x >= 0) return true;
        if (index_pos.y < BoxCount && index_pos.y >= 0) return true;
        return false;
    }



    /// <summary>
    /// 当格子数量改变时，需要刷新全部
    /// </summary>
    private void RefreshAll()
    {

        RefreshSize();
        CropLine();
    }

    //裁剪不合法的线段
    private void CropLine()
    {
        //裁剪不符合要求的线
        for (int i = 0; i < Lines.Count; i++)
        {
            if (IndexPosInMap(Lines[i].Key) || IndexPosInMap(Lines[i].Value))
            {
                Lines.RemoveAt(i);
                i--;
            }
        }
    }
    //尺寸改变时刷新坐标
    private void RefreshSize()
    {
        //重置坐标缓存
        for (int i = 0; i < BoxCount; i++)
        {
            for (int j = 0; j < BoxCount; j++)
            {
                Positions[i, j] = new Vector2(i * BoxSize, j * BoxSize);
            }
        }
    }

    protected override void OnDispose()
    {

    }



    /// <summary>
    /// 道具存放
    /// </summary>
    public List<Entity> Items { get; } = new List<Entity>();



}
