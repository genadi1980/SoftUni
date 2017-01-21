using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _01.PracticeIntegerNumbers
{
    class IntegerNumbers
    {
        static void Main(string[] args)
        {
            sbyte num1 = -100;
            byte num2 = 128;
            short num3 = -3540;
            ushort num4 = 64876;
            uint num5 = 2147483648;
            int num6 = -1141583228;
            decimal num7 = -1223372036854775808;

            Console.WriteLine("{0}", num1);
            Console.WriteLine("{0}", num2);
            Console.WriteLine("{0}", num3);
            Console.WriteLine("{0}", num4);
            Console.WriteLine("{0}", num5);
            Console.WriteLine("{0}", num6);
            Console.WriteLine("{0}", num7);
        }
    }
}
