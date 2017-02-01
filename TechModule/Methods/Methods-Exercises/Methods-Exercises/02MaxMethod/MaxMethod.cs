using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _02MaxMethod
{
    class MaxMethod
    {
        static void Main(string[] args)
        {
            var numFirst = int.Parse(Console.ReadLine());
            var numSecond = int.Parse(Console.ReadLine());
            var numThird = int.Parse(Console.ReadLine());

            int temp = GetMax(numFirst, numSecond);
            if (temp > numThird)
            {
                Console.WriteLine(temp);
            }
            else Console.WriteLine(numThird);

        }

        static int GetMax(int a, int b)
        {
            if (a > b)
            {
                return a;
            }
            else return b;
        }
    }
}
