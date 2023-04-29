/********************************************************************************************
 * Author : YueZhenpeng
 * Date : 2023.1.15
 * Description : 
 * 在需要面对密封类进行封装时，我们难以采用继承密封类的方式，这样也是不被编译器允许的
 * 所以在框架内需要进行浅封装时，均通过实现IValueContainer的方式进行，我们可以通过拿取Value操作原密封类对象
 * 但是当需要进行多层封装时不使用IValueContainer，因为会出现Obj.Value.Value的形式，
 * 或者在Dictionary遍历时出现Value.Value.Value，这种写法是令人难以接受的，所以我们最多只进行一次值容器封装
 */

namespace AirFramework
{
    public interface IValueContainer<out T>
    {
        /// <summary>
        /// ValueContainer封装值
        /// </summary>
        T Value { get; }
    }
}
