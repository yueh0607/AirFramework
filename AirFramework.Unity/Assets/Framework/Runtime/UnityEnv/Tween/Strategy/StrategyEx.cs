using AirFramework.MV.RefBuild;
using System;
using UnityEngine;

namespace AirFramework
{
    public static class StrategyEx
    {

        internal static ISteper GetSteper<T>() where T : IEquatable<T>
        {
            Type type = typeof(T);

            if (type == typeof(int)) return Framework.Pool.Allocate<IntSteper>();
            if (type == typeof(float)) return Framework.Pool.Allocate<FloatSteper>();
            if (type == typeof(double)) return Framework.Pool.Allocate<DoubleSteper>();
            if (type == typeof(Vector2)) return Framework.Pool.Allocate<Vector2Steper>();
            if (type == typeof(Vector3)) return Framework.Pool.Allocate<Vector3Steper>();
            if (type == typeof(Color)) return Framework.Pool.Allocate<ColorSteper>();
            if (type == typeof(String)) return Framework.Pool.Allocate<StringSteper>();
            throw new InvalidOperationException($"Do not Have Steper<{type}>!");
        }

        internal static ISteper GetSteperWithParm<T>(T start, T end, BindableProperty<T> port) where T : IEquatable<T>
        {
            var stepter = (TweenSteper<T>)GetSteper<T>();
            stepter.ValueStart = start;
            stepter.ValueEnd = end;
            stepter.Current = port;
            return stepter;
        }


    }
}
