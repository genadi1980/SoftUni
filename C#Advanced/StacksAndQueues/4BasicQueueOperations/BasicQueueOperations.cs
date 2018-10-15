using System;
using System.Collections.Generic;
using System.Linq;

namespace _4BasicQueueOperations
{
    class BasicQueueOperations
    {
        static void Main(string[] args)
        {
            var queue = new Queue<int>();

            var input = Console.ReadLine()
                .Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries)
                .Select(int.Parse)
                .ToArray();

            var sequence = Console.ReadLine()
                .Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries)
                .Select(int.Parse)
                .ToArray();

            var N = input[0];
            var S = input[1];
            var X = input[2];

            for (int i = 0; i < N; i++)
            {
                queue.Enqueue(sequence[i]);
            }

            for (int i = 0; i < S; i++)
            {
                queue.Dequeue();
            }

            if (queue.Contains(X))
            {
                Console.WriteLine("true");
            }
            else if (queue.Count == 0)
            {
                Console.WriteLine("0");
            }

            else
            {
                Console.WriteLine(queue.Min());
            }


        }
    }
}
