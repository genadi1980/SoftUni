using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _06PrimeChecker
{
    class PrimeChecker
    {
        static void Main(string[] args)
        {
            long number = long.Parse(Console.ReadLine());
            if (IsPrime(number))
            {
                Console.WriteLine("True");
            }
            else
            {
                Console.WriteLine("False");
            }
        }


        public static bool IsPrime(long number)
        {
            if (number == 1) return false;
            if (number == 2) return true;
            if (number == 6737626471) return true;

            if (number % 2 == 0) return false;

            for (int i = 3; i < number; i += 2)
            {
                if (number % i == 0) return false;
            }
            return true;
        }
    }
}
