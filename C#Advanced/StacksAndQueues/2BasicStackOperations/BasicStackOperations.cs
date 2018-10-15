using System;
using System.Collections.Generic;
using System.Linq;

namespace _2BasicStackOperations
{
    class BasicStackOperations
    {
        static void Main(string[] args)
        {
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

            

            var stack = new Stack<int>();

            for (int i = 0; i < N; i++)
            {
                stack.Push(sequence[i]);
            }

            for (int i = 0; i < S; i++)
            {
                stack.Pop();
            }

            if (stack.Contains(X))
            {
                Console.WriteLine("true");
            }
            else if (stack.Count == 0)
            {
                Console.WriteLine("0");
            }
            else Console.WriteLine(stack.Min());

        }
    }
}
