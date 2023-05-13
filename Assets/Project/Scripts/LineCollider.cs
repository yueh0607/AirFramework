using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;



public class LineCollider : MonoBehaviour
{
    LineRenderer lineRenderer;
    EdgeCollider2D boxcollider;



    public void CreateCollider()
    {
        if (lineRenderer == null || boxcollider == null)
        {
            lineRenderer = this.GetComponent<LineRenderer>();
            boxcollider = this.AddComponent<EdgeCollider2D>();
        }

        boxcollider.edgeRadius = lineRenderer.widthMultiplier * 0.5f;
        boxcollider.SetPoints(new List<Vector2>() { lineRenderer.GetPosition(0), lineRenderer.GetPosition(1) });
    }
    public void RemoveCollider()
    {
        if (boxcollider != null)
            Destroy(boxcollider);
    }



}
