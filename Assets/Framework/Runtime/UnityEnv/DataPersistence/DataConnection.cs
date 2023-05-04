﻿using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using System.Text;
using Newtonsoft.Json;

namespace AirFramework
{


    public class DataConnection
    {
        private readonly FileStream fileHandle;

        Dictionary<string, string> data = null;
        Dictionary<string, string> Data
        {
            get
            {
                if (data == null) data = new Dictionary<string, string>();
                return data;
            }
            set { data = value; }
        }


        public string Path { get; private set; }
        public DataConnection(string path)
        {
            Path = path;
        }

        public void Initialize()
        {

            string text = File.ReadAllText(Path);
            Data = JsonConvert.DeserializeObject<Dictionary<string, string>>(text);

        }
        public async AsyncTask InitializeAsync()
        {
            string text = await File.ReadAllTextAsync(Path);
            Data = JsonConvert.DeserializeObject<Dictionary<string, string>>(text);
        }


        public void Save()
        {
            string txt = JsonConvert.SerializeObject(Data);
            System.IO.File.WriteAllText(Path, txt);
        }

        public async AsyncTask SaveAsync()
        {
            string txt = JsonConvert.SerializeObject(data);

            await System.IO.File.WriteAllTextAsync(Path, txt);
        }

        public void Set(string key, string value)
        {
            if (Data.ContainsKey(key)) Data[key] = value;
            else Data.Add(key, value);
        }

        public void Delete(string key)
        {
            if (Data.ContainsKey(key)) Data.Remove(key);
        }

        public string Get(string key)
        {
            if(Data.ContainsKey(key)) return Data[key];
            return null;
        }

 
    }
}
