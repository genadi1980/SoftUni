using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _04.VariableinHexadecimalFormat
{
    class VariableinHexadecimalFormat
    {
        static void Main(string[] args)
        {
            string value = Console.ReadLine();
            int num = Convert.ToInt32(value, 16);
            Console.WriteLine("{0}", num);

        }
    }
}
