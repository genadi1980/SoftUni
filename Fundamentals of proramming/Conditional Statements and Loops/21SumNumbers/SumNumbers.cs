using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _21SumNumbers
{
    public class SumNumbers
    {
        public static void Main()
        {
            var n = int.Parse(Console.ReadLine());
            var sum = 0;
            for (int i = 0; i < n; i++)
            {
                var number = int.Parse(Console.ReadLine());

                sum += number;
            }
            
            Console.WriteLine(sum);
        }
    }
}
