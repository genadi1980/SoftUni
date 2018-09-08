using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _01DayofWeeks
{
    public class DayofWeeks
    {
        public static void Main()
        {
            string[] dayOfwekks = { "Monday", "Tuesday", "Wednesday",
                "Thursday", "Friday", "Saturday", "Sunday" };
            var number = int.Parse(Console.ReadLine());

            if (number>=1 && number <= 7)
            {
                Console.WriteLine(dayOfwekks[number - 1]);

            }
            else Console.WriteLine("Invalid Day!");
        }
    }
}
