using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _12MasterNumber
{
    class MasterNumber
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            for (int number = 0; number <= n; number++)
            {
                if (IsPalindrome(number.ToString()) && (SumOfDigits(number) %7 == 0) && IsContainsEvenDigit(number))
                {
                    Console.WriteLine(number);
                }
            }
        }

        private static bool IsContainsEvenDigit(int num)
        {
            bool containEvenDigit = false;

            while (num > 0)
            {
                int currentDigit = num % 10;
                if (currentDigit % 2 == 0)
                {
                    containEvenDigit = true;
                    break;
                }
                else
                {
                    num /= 10;
                }
            }
            return containEvenDigit;
        }

        private static long SumOfDigits(long n)
        {
            long sumOfDigits = 0;
            while (n > 0)
            {
                long digit = n % 10;
                sumOfDigits += digit;
                n /= 10;
            }
            return sumOfDigits;
        }

        private static bool IsPalindrome(string v)
        {
            for (int i = 0; i < v.Length / 2; i++)
            {
                if (v[i] != v[v.Length - i - 1])
                {
                    return false;
                }
            }
            return true;
        }
    }
}
