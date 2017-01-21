using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _05.BooleanVariable
{
    class BooleanVariable
    {
        static void Main(string[] args)
        {
            string value = Console.ReadLine();
            bool isValue = Convert.ToBoolean(value);

            if (isValue)
            {
                Console.WriteLine("Yes");
            }
            else Console.WriteLine("No");
        
        }
    }
}