using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _05SpecialNumbers
{
    class SpecialNumbers
    {
        static void Main(string[] args)
        {
            var n = int.Parse(Console.ReadLine());

            for (int i = 1; i <= n; i++)
            {
                bool special = IsNumberSpecial(i);
                Console.WriteLine("{0} -> {1}", i, special);
            }
        }

        private static bool IsNumberSpecial(int num)
        {
            int SumofDigits = CalcSumOfDigits(num);
            bool spceial =
                (SumofDigits == 5) ||
                (SumofDigits == 7) ||
                (SumofDigits == 11);
            return spceial;
        }

        private static int CalcSumOfDigits(int num)
        {
            int sum = 0;
            while (num > 0)
            {
                sum += num % 10;
                num = num / 10;
            }
            return sum; 
        }
    }
}
