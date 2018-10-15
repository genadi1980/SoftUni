using System;
using System.Collections.Generic;
using System.Linq;


namespace _5SequenceWithQueue
{
    class SequenceWithQueue
    {
        static void Main(string[] args)
        {
            var queue = new Queue<long>();

            var n = long.Parse(Console.ReadLine());

            Console.Write(n + " ");

            for (int i = 0; i < 17; i++)
            {
                queue.Enqueue(n + 1);
                queue.Enqueue(2 * n + 1);
                queue.Enqueue(n + 2);

                n = queue.Dequeue();

                Console.Write(n + " ");
            }

            for (int i = 0; i < 32; i++)
            {

                Console.Write(queue.Dequeue() + " ");
            }

            Console.WriteLine( );
        }
    }
}
