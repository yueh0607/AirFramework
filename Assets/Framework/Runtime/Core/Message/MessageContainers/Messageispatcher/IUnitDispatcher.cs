﻿namespace AirFramework
{
    public interface IDispatcherOut<out T> where T : IMessage
    {
        /*
         * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
         * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
         * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
         * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
         * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
         * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
         */

        //允许使用其他类型，但禁用T类型，T仅作语法配位
        public MessageDispatcher Value { get; }
    }
    public interface IDispatcherIn<in T> where T: IMessage 
    {

        /*
        * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
        * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
        * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
        * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
        * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
        * 警告:此处严格禁止引用T类型！！！否则可能引发程序直接崩溃！！！
        */

        //允许使用其他类型，但禁用T类型，T仅作语法配位
        public MessageDispatcher Value { get; }
    }
}
