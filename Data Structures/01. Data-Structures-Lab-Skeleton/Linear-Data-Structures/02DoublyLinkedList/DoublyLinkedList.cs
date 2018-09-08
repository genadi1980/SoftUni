using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _02DoublyLinkedList
{
    public class DoublyLinkedList<T> : IEnumerable<T>
    {
        private class DoublyLinkedList<T> : IEnumerable<T>
        {
            private class ListNode<T>
            {
                public T Value { get; private set; }

                public ListNode<T> NextNode { get; set; }

                public ListNode<T> PrevNode { get; set; }

                public ListNode(T value)
                {
                    this.Value = value;
                }
            }
        }
        public IEnumerator<T> GetEnumerator()
        {
            var currentNode = this.head;
            while (currentNode != null)
            {
                yield return currentNode.Value;
                currentNode = currentNode.NextNode;
            }
        }
    }
}
