using System;
using System.Linq;
using System.Collections.Generic;

namespace _3MaximumElement
{
    class MaximumElement
    {
        static void Main(string[] args)
        {
            var stack = new Stack<int>();

            var n = int.Parse(Console.ReadLine());
            

            for (int i = 0; i < n; i++)
            {
                var input = Console.ReadLine()
                .Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries)
                .Select(int.Parse)
                .ToArray();

                var operation = input[0];
                

                if (operation == 1)
                {
                    var number = input[1];
                    stack.Push(number);
                }

                else if (operation == 2)
                {
                    stack.Pop();
                }

                else if (operation == 3)
                {
                    Console.WriteLine(stack.Max());
                }

            }
        }
    }
}
