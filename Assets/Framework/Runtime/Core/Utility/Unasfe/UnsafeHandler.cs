using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    internal unsafe class UnsafeHandler
    {
#pragma warning disable
        unsafe public static ref TTo AsRef<TFrom, TTo>(ref TFrom source)
        {

            if (sizeof(TFrom) != sizeof(TTo))
            {
                throw new InvalidCastException("Size of TFrom and TTo must be the same.");
            }

            fixed (void* sourcePtr = &source)
            {
                return ref *(TTo*)sourcePtr;
            }
        }
#pragma warning restore




    }
}
