using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    public class NamespaceObject
    {
        public List<ClassObject> Classes= new List<ClassObject>();
    }
    public class ClassObject
    {
        public List<PropertyObject> Properties= new List<PropertyObject>();
        public List<FieldObject> Fileds= new List<FieldObject>();
        public List<MethodObject> Methods= new List<MethodObject>();

    }
    public class PropertyObject
    {
        public PropertyObject(string name,bool get,bool set)
        {

        }
    }
    public class FieldObject
    {

    }
    public class MethodObject
    {

    }

}
