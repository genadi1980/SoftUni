using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _07ExchangeVariableValues
{
    class ExchangeVariableValues
    {
        static void Main(string[] args)
        {
            string a = Console.ReadLine();
            int aa = Convert.ToInt32(a);
            string b = Console.ReadLine();
            int bb = Convert.ToInt32(b);
            int c = 0;

            Console.WriteLine("Before: ");
            Console.WriteLine("a = {0}", aa);
            Console.WriteLine("b = {0}", bb);
            c = aa;
            aa = bb;
            bb = c;
            Console.WriteLine("After: ");
            Console.WriteLine("a = {0}", aa);
            Console.WriteLine("b = {0}", bb);
        }
    }
}
