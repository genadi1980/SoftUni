using System;
using System.Collections.Generic;

namespace _08StackFibonacci
{
    class StackFibonacci
    {
        static void Main(string[] args)
        {
            Stack<long> fibonacci = new Stack<long>();

            int n = int.Parse(Console.ReadLine());

            fibonacci.Push(0);
            fibonacci.Push(1);

            for (int i = 0; i < n-1; i++)
            {
                long firstNumber = fibonacci.Pop();
                long secondNumber = fibonacci.Peek();

                fibonacci.Push(firstNumber);
                fibonacci.Push(firstNumber + secondNumber);
            }

            Console.WriteLine(fibonacci.Peek());
        }
    }
}
