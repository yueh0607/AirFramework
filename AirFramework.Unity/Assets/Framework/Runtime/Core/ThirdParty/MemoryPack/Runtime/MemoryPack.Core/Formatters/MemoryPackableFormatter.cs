#nullable enable

namespace MemoryPack.Formatters
{

#if NET7_0_OR_GREATER

[Preserve]
public sealed class MemoryPackableFormatter<T> : MemoryPackFormatter<T>
    where T : IMemoryPackable<T>
{
    [Preserve]
    public override void Serialize(ref MemoryPackWriter writer, ref T? value)
    {
        T.Serialize(ref writer, ref Unsafe.AsRef(value));
    }

    [Preserve]
    public override void Deserialize(ref MemoryPackReader reader, ref T? value)
    {
        T.Deserialize(ref reader, ref value);
    }
}

#endif

}