using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ITableRead<T>
{
    T this[int row,int column] { get; }
}
public interface ITableWrite<T>
{
    T this[int row, int column] { set; }
}
public interface ITable<T>:ITableRead<T>,ITableWrite<T>
{

}

