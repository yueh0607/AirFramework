using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AirFramework
{
    #region Int
    // Int16Converter
    internal class Int16Converter : Singleton<Int16Converter>, IStringConverter<Int16>
    {
        public Int16 ToObject(string str)
        {
            return Convert.ToInt16(str);
        }

        public string ToString(Int16 obj)
        {
            return obj.ToString();
        }
    }
    internal class Int32Converter : Singleton<Int32Converter>, IStringConverter<Int32>
    {
        public Int32 ToObject(string str)
        {
            return Convert.ToInt32(str);
        }

        public string ToString(Int32 obj)
        {
            return obj.ToString();
        }
    }


    // Int32Converter (已给出)

    // Int64Converter
    internal class Int64Converter : Singleton<Int64Converter>, IStringConverter<Int64>
    {
        public Int64 ToObject(string str)
        {
            return Convert.ToInt64(str);
        }

        public string ToString(Int64 obj)
        {
            return obj.ToString();
        }
    }


    #endregion

    #region float

    // SingleConverter
    internal class SingleConverter : Singleton<SingleConverter>, IStringConverter<Single>
    {
        public Single ToObject(string str)
        {
            return Convert.ToSingle(str);
        }

        public string ToString(Single obj)
        {
            return obj.ToString();
        }
    }

    // DoubleConverter
    internal class DoubleConverter : Singleton<DoubleConverter>, IStringConverter<Double>
    {
        public Double ToObject(string str)
        {
            return Convert.ToDouble(str);
        }

        public string ToString(Double obj)
        {
            return obj.ToString();
        }
    }

    // DecimalConverter
    internal class DecimalConverter : Singleton<DecimalConverter>, IStringConverter<Decimal>
    {
        public Decimal ToObject(string str)
        {
            return Convert.ToDecimal(str);
        }

        public string ToString(Decimal obj)
        {
            return obj.ToString();
        }
    }


    #endregion

    #region Time

    // DateTimeConverter
    internal class DateTimeConverter : Singleton<DateTimeConverter>, IStringConverter<DateTime>
    {
        public DateTime ToObject(string str)
        {
            return Convert.ToDateTime(str);
        }

        public string ToString(DateTime obj)
        {
            return obj.ToString();
        }
    }


    // TimeSpanConverter
    internal class TimeSpanConverter : Singleton<TimeSpanConverter>, IStringConverter<TimeSpan>
    {
        public TimeSpan ToObject(string str)
        {
            return TimeSpan.Parse(str);
        }


        public string ToString(TimeSpan obj)
        {
            return obj.ToString();
        }
    }
    // DateTimeOffsetConverter
    internal class DateTimeOffsetConverter : Singleton<DateTimeOffsetConverter>, IStringConverter<DateTimeOffset>
    {
        public DateTimeOffset ToObject(string str)
        {
            return DateTimeOffset.Parse(str);
        }


        public string ToString(DateTimeOffset obj)
        {
            return obj.ToString();
        }
    }

    #endregion

    #region Byte

    // ByteConverter
    internal class ByteConverter : Singleton<ByteConverter>, IStringConverter<Byte>
    {
        public Byte ToObject(string str)
        {
            return Convert.ToByte(str);
        }

        public string ToString(Byte obj)
        {
            return obj.ToString();
        }
    }

    // SByteConverter
    internal class SByteConverter : Singleton<SByteConverter>, IStringConverter<SByte>
    {
        public SByte ToObject(string str)
        {
            return Convert.ToSByte(str);
        }

        public string ToString(SByte obj)
        {
            return obj.ToString();
        }
    }

    #endregion

    #region UInt

    // UInt16Converter
    internal class UInt16Converter : Singleton<UInt16Converter>, IStringConverter<UInt16>
    {
        public UInt16 ToObject(string str)
        {
            return Convert.ToUInt16(str);
        }

        public string ToString(UInt16 obj)
        {
            return obj.ToString();
        }
    }

    // UInt32Converter
    internal class UInt32Converter : Singleton<UInt32Converter>, IStringConverter<UInt32>
    {
        public UInt32 ToObject(string str)
        {
            return Convert.ToUInt32(str);
        }

        public string ToString(UInt32 obj)
        {
            return obj.ToString();
        }
    }

    // UInt64Converter
    internal class UInt64Converter : Singleton<UInt64Converter>, IStringConverter<UInt64>
    {
        public UInt64 ToObject(string str)
        {
            return Convert.ToUInt64(str);
        }

        public string ToString(UInt64 obj)
        {
            return obj.ToString();
        }
    }

    #endregion


    // BooleanConverter
    internal class BooleanConverter : Singleton<BooleanConverter>, IStringConverter<Boolean>
    {
        public Boolean ToObject(string str)
        {
            return Convert.ToBoolean(str);
        }

        public string ToString(Boolean obj)
        {
            return obj.ToString();
        }
    }


    #region Str
    internal class StringConverter : Singleton<StringConverter>, IStringConverter<string>
    {
        public string ToObject(string str)
        {
            return str;
        }

        public string ToString(string obj)
        {
            return obj;
        }
    }


    // CharConverter
    internal class CharConverter : Singleton<CharConverter>, IStringConverter<Char>
    {
        public Char ToObject(string str)
        {
            return Convert.ToChar(str);
        }

        public string ToString(Char obj)
        {
            return obj.ToString();
        }
    }

    #endregion
    internal class ByteArrayConverter : Singleton<ByteArrayConverter>, IStringConverter<byte[]>
    {
        public byte[] ToObject(string str)
        {
            return Convert.FromBase64String(str);
        }

        public string ToString(byte[] obj)
        {
            return Convert.ToBase64String(obj);
        }
    }

    // EnumConverter (通用枚举转换器，适用于任何枚举类型)
    internal class EnumConverter<TEnum> : Singleton<EnumConverter<TEnum>>, IStringConverter<TEnum> 
    {
        public TEnum ToObject(string str)
        {
            //Type type = typeof(TEnum);
            //if (!type.IsEnum || !type.IsValueType) throw new InvalidCastException($"string to EnumType<{type.FullName}> Error");
            return (TEnum)Enum.Parse(typeof(TEnum),str);
        }

        public string ToString(TEnum obj)
        {
            return obj.ToString();
        }
    }


  

    internal class BindablePropertyConverter<T> : IStringConverter<BindableProperty<T>> where T:IEquatable<T>
    {
        public BindableProperty<T> ToObject(string str)
        {
            return new BindableProperty<T>(DataConverter.Instance.GetConverter<T>().ToObject(str));
        }

        public string ToString(BindableProperty<T> obj)
        {
            return DataConverter.Instance.GetConverter<T>().ToString(obj.Value);
        }
    }
    

}
