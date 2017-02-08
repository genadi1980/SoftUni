using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _04NumbersinReversedOrder
{
    class NumbersinReversedOrder
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            string output = Reverse(input);
            Console.WriteLine(output);

        }

        public static string Reverse(string s)
        {
            char[] charArray = s.ToCharArray();
            Array.Reverse(charArray);
            return new string(charArray);
        }
    }
}
