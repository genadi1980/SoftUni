using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _20Numbersto1000Ending7
{
    public class Numbersto1000Ending7
    {
        public static void Main()
        {
            for (int i = 1; i <= 1000; i++)
            {

                if (i % 10 == 7)
                {
                    Console.WriteLine(i);
                }
                
            }
        }
    }
}
