using System;

namespace GreaterNumber
{
    class Program
    {
        static void Main(string[] args)
        {
            var num = int.Parse(Console.ReadLine());
            var num2 = int.Parse(Console.ReadLine());

            if (num >= num2)
            {
                Console.WriteLine(num);
            }
            else
            {
                Console.WriteLine(num2);
            }
        }
    }
}
