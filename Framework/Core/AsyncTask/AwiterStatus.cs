using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace AirFramework
{
    public enum TaskStatus
    {
        /// <summary>The operation has not yet completed.</summary>
        Pending = 0,

        /// <summary>The operation completed successfully.</summary>
        Succeeded = 1,

        /// <summary>The operation completed with an error.</summary>
        Faulted = 2,

        /// <summary>The operation completed due to cancellation.</summary>
        Canceled = 3
    }


    public static class AwaiterStatusExtensions
    {
        /// <summary>!= Pending.</summary>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool IsCompleted(this TaskStatus status)
        {
            return status != TaskStatus.Pending;
        }

        /// <summary>== Succeeded.</summary>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool IsCompletedSuccessfully(this TaskStatus status)
        {
            return status == TaskStatus.Succeeded;
        }

        /// <summary>== Canceled.</summary>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool IsCanceled(this TaskStatus status)
        {
            return status == TaskStatus.Canceled;
        }

        /// <summary>== Faulted.</summary>
        [MethodImpl(MethodImplOptions.AggressiveInlining)]
        public static bool IsFaulted(this TaskStatus status)
        {
            return status == TaskStatus.Faulted;
        }
    }
}
