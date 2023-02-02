using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace AirFramework
{
    public class GameObjectPool: GenericPool<GameObject>
    {

        public GameObject prefab;
        
        public GameObject DefaultCreate()
        {
            return GameObject.Instantiate(prefab);
        }
        public void DefaultDestroy(GameObject item)
        {
            GameObject.Destroy(item);
        }
        public void DefaultAllocate(GameObject item)
        {
            item.SetActive(true);
        }
        public void DefaultRecycle(GameObject item)
        {
            item.SetActive(false);
            item.transform.position= Vector3.zero;
            item.transform.SetParent(null);
        }
        public GameObjectPool():base()
        {
            base.onCreate = DefaultCreate;
            base.onRecycle += DefaultRecycle;
            base.onDestroy+= DefaultDestroy;
            base.onAllocate += DefaultAllocate;
        }
    }
}
