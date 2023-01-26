
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static PlasticGui.WorkspaceWindow.CodeReview.Summary.CommentSummaryData;

namespace AirFramework
{
    public interface IMessageDispatcher
    {
        public void Register<MessageType>(Action<MessageType> message) where MessageType : class, IMessage
        ;
        public void Remove<MessageType>(Action<MessageType> message) where MessageType : class, IMessage
        ;
        public void Remove<MessageType>() where MessageType : class, IMessage;
        public void Invoke<MessageType>(MessageType message) where MessageType : class, IMessage;

        public int CountAll { get; }
        public void RemoveAll();

        public void Reply<RespondType, MessageType>(Func<MessageType, RespondType> message);
        public void Recall<MessageType>();
        public RespondType Ask<MessageType, RespondType>(MessageType message) where MessageType : class, IMessage;
        public void RecallAll();

    }
}
