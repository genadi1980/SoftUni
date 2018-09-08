using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _02ReverseanArrayofIntegers
{
    public class ReverseanArrayofIntegers
    {
        public static void Main()
        {
            var num = int.Parse(Console.ReadLine());

            int[] arrayOfNumbers = new int[num];

            for (int i  = 0; i  <= num - 1; i ++)
            {
                var digit = int.Parse(Console.ReadLine());
                arrayOfNumbers[i] = digit;
            }

            for (int i = num - 1; i >= 0; i--)
            {
                Console.Write(arrayOfNumbers[i] + " ");
            }
        }
    }
}
