using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEditor;
using UnityEngine;

namespace AirFramework.Editor
{
    public class ModelCodeGenerator
    {
        StringBuilder builder = new();

        public ModelCodeGenerator(string model)
        {
            builder.Append(model);
        }
        
        public void Replace(string label,string name)
        {
            builder.Replace($"#{label}#", name);
        }


        public TextAsset GetCode()
        {
            TextAsset ta = new TextAsset(builder.ToString());
            return ta;
        }
    }
}
