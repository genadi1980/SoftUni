using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _02.CountofNegativeElementsinArray
{
    class CountofNegativeElementsinArray
    {
        static void Main(string[] args)
        {
            var n = int.Parse(Console.ReadLine());

            var arrayNumbers = new int[n];
            var countNegative = 0;
            for (int i = 0; i < arrayNumbers.Length; i++)
            {
                var number = int.Parse(Console.ReadLine());
                arrayNumbers[i] = number;

                if (arrayNumbers[i] < 0)
                {
                    countNegative++;
                }
            }

            Console.WriteLine(countNegative);
        }
    }
}
