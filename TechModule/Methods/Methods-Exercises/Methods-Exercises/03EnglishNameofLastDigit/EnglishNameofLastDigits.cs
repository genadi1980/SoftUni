using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _03EnglishNameofLastDigit
{
    class EnglishNameofLastDigits
    {
        static void Main(string[] args)
        {
            var number = long.Parse(Console.ReadLine());            
            long lastSymbol = GetLastDigit(number);
            switch (Math.Abs(lastSymbol))
            {
                case 1: Console.WriteLine("one"); break;
                case 2: Console.WriteLine("two"); break;
                case 3: Console.WriteLine("three"); break;
                case 4: Console.WriteLine("four"); break;
                case 5: Console.WriteLine("five"); break;
                case 6: Console.WriteLine("six"); break;
                case 7: Console.WriteLine("seven"); break;
                case 8: Console.WriteLine("eight"); break;
                case 9: Console.WriteLine("nine"); break;
                case 0: Console.WriteLine("zero"); break;
            }
        }

        static long GetLastDigit(long number)
        {
           long lastSymbol =  number % 10;
            return lastSymbol;


        }
    }
}
