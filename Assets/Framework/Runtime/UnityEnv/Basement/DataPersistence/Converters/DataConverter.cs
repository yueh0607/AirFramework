using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using UnityEngine;

namespace AirFramework
{
    public class DataConverter : Singleton<DataConverter>
    {

        private static Dictionary<Type, Type> convertMap = new()
        {

            {typeof(Int16), typeof(Int16Converter) },
            {typeof(Int32), typeof(Int32Converter) },
            {typeof(Int64), typeof(Int64Converter) },
            {typeof(UInt16), typeof(UInt16Converter) },
            {typeof(UInt32), typeof(UInt32Converter) },
            {typeof(UInt64), typeof(UInt64Converter) },
            {typeof(Single), typeof(SingleConverter)},
            {typeof(Double), typeof(DoubleConverter)},

            {typeof(Decimal), typeof(DecimalConverter)},
            {typeof(String), typeof(StringConverter)},
            {typeof(Boolean), typeof(BooleanConverter)},
            {typeof(SByte), typeof(SByteConverter)},
            {typeof(Byte), typeof(ByteConverter)},
            {typeof(Char), typeof(CharConverter)},
            {typeof(DateTime), typeof(DateTimeConverter)},
            {typeof(TimeSpan), typeof(TimeSpanConverter)},
            {typeof(Byte[]), typeof(ByteArrayConverter)},

            {typeof(BindableProperty<>), typeof(BindablePropertyConverter<>)},

        };
        private static Dictionary<Type, object> converterContainer = new Dictionary<Type, object>();



        public IStringConverter<T> GetConverter<T>()
        {
            //被转换类型
            Type dataType = typeof(T);
            //回归到泛型定义，进入map查询
            Type dataGenericType = dataType.IsGenericType ? dataType.GetGenericTypeDefinition() : dataType;


            //根据数据类型寻找已经存在的转换器
            if (converterContainer.ContainsKey(dataType))
            {
                return (IStringConverter<T>)converterContainer[dataType];
            }

            //包含被转换类型的转换器类型，可能为GenericType
            if (!convertMap.ContainsKey(dataGenericType))
            {
                // 对于其他类型，可以根据需要实现自定义的转换器
                throw new NotImplementedException($"Converter for dataType {dataType.FullName} is not implemented.");

            }

            //转换器类型
            Type trueConverterType = convertMap[dataType].MakeGenericType(dataType);

            //创建转换器
            IStringConverter<T> converter = (IStringConverter<T>)Activator.CreateInstance(dataGenericType);
            converterContainer.Add(dataType, converter);
            return converter;


            throw new NotImplementedException($"Convert Error!.");
        }



        public T ToObject<T>(string value)
        {
            return GetConverter<T>().ToObject(value);
        }

        public string ToString<T>(T value)
        {
            return GetConverter<T>().ToString(value);
        }
    }
}
