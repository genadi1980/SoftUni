using System;

namespace EvenOrOdd
{
    class EvenOrOdd
    {
        static void Main(string[] args)
        {
            var number = int.Parse(Console.ReadLine());
            var even = number % 2;

            if (even == 0)
            {
                Console.WriteLine("even");
            }
            else
            {
                Console.WriteLine("Odd");
            }

        }
    }
}
