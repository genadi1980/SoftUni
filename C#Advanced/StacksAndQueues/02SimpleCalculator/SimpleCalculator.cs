using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _02SimpleCalculator
{
    class SimpleCalculator
    {
        static void Main()
        {
            var input = Console.ReadLine();

            var reminder = input.Split(' ');

            var stack = new Stack<string>(reminder.Reverse());

            while (stack.Count > 1)
            {
                var firstNumber = int.Parse(stack.Pop());
                var op = stack.Pop();
                var secondNumber = int.Parse(stack.Pop());

                if (op == "+")
                {
                    stack.Push((firstNumber + secondNumber).ToString());
                }
                else
                {
                    stack.Push((firstNumber - secondNumber).ToString());
                }

                
            }

            Console.WriteLine(stack.Pop());
        }
    }
}