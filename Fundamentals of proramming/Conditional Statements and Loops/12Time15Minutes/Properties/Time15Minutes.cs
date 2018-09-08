using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _12Time15Minutes
{
    public class Time15Minutes
    {
        public static void Main()
        {
            var hours = int.Parse(Console.ReadLine());
            var minutes = int.Parse(Console.ReadLine());

            minutes += 15;

            if (minutes >= 60 )
            {
                minutes -= 60;
                hours += 1;
            }

            if (hours >= 24)
            {
                hours -= 24;
            }

            Console.WriteLine($"{hours}:{Math.Abs(minutes):00}");
        }
    }
}
