using System;
using System.Collections.Generic;
using System.Linq;

namespace _1_Reverse_Strings
{
    class Program
    {
        static void Main()
        {
            var numbers = Console.ReadLine()
                .Split(new[] {' '}, StringSplitOptions.RemoveEmptyEntries)
                .Select(long.Parse)
                .ToArray();


            var reverseStack = new Stack<long>();

            for (int i = 0; i < numbers.Length; i++)
            {
                reverseStack.Push(numbers[i]);
            }

            foreach (var item in reverseStack)
            {
                Console.Write(item + " ");
            }

            Console.WriteLine();

        }
    }
}
