using AirFramework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapData : Unit
{

    public Dictionary<ZoneData, Vector2> Zones { get; } = new Dictionary<ZoneData, Vector2>();

    
    protected override void OnDispose()
    {
        
    }
}
