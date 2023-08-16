using System.Collections;
using System.Collections.Generic;

namespace AirFramework
{
    public class UIModule : AbstractModule
    {

        public Stack<View> uiStack = new Stack<View>();
        public void EnStack(View view)
        {
            uiStack.Push(view);
        }

        public View Pop()
        {
            return uiStack.Pop();
        }
        public View Peek()
        {
            return uiStack.Peek();
        }

        public override void OnCreate()
        {

        }

        public override void Update(float deltaTime)
        {

        }

        protected override void OnDispose()
        {

        }
    }
}
