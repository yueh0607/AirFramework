using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace AirFramework
{
    public static class DataPackExtensions
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static byte[] Serialize(this DataPack pack) => Serialize(pack);



    }



    public partial class DataPack
    {
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static DataPack DeSerialize(byte[] bytes) => MemoryPack.MemoryPackSerializer.Deserialize<DataPack>(bytes);


        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static byte[] Serialize(DataPack pack) => MemoryPack.MemoryPackSerializer.Serialize(pack);



        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static async AirTask<DataPack> DeSerializeAsync(Stream stream)
        {
            var dp = await MemoryPack.MemoryPackSerializer.DeserializeAsync<DataPack>(stream);
            return dp;
        }


        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static async AirTask SerializeAsync(DataPack pack, Stream stream)
        {
            await MemoryPack.MemoryPackSerializer.SerializeAsync<DataPack>(stream, pack);
        }
    }
}
