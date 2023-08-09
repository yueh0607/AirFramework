#nullable enable
using MemoryPack.Internal;
using System.Globalization;

namespace MemoryPack.Formatters
{

    [Preserve]
    public sealed class CultureInfoFormatter : MemoryPackFormatter<CultureInfo>
    {
        // treat as a string(Name).

        [Preserve]
        public override void Serialize(ref MemoryPackWriter writer, ref CultureInfo? value)
        {
            writer.WriteString(value?.Name);
        }

        [Preserve]
        public override void Deserialize(ref MemoryPackReader reader, ref CultureInfo? value)
        {
            var str = reader.ReadString();
            if (str == null)
            {
                value = null;
            }
            else
            {
                value = CultureInfo.GetCultureInfo(str);
            }
        }
    }
}