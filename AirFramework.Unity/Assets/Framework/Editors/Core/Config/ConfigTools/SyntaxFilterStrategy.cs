using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class SyntaxFilter<T>
{
    public abstract ConfigTable<T> GetNextTable(ConfigTable<T> table);
}
