using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _06MathPower
{
    class MathPower
    {
        static double RaiseToPower(double number, int power)
        {
            double result = 0d;
            result = Math.Pow(number, power);
            return result;
        }

        static void Main(string[] args)
        {
            var num = double.Parse(Console.ReadLine());
            var power = int.Parse(Console.ReadLine());
            var result = RaiseToPower(num, power);
            Console.WriteLine( result);
        }
    }
}
