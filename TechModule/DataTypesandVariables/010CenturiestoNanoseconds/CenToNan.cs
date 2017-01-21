using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _010CenturiestoNanoseconds
{
    class CenToNan
    {
        static void Main(string[] args)
        {
            ushort centuries = ushort.Parse(Console.ReadLine());
            int years = centuries * 100;
            int days = (int) (years * 365.2422);
            long hours = 24 * days;
            long min = 60 * hours;
            long sec = 60 * min;
            long millis = 1000 * sec;
            decimal micros = (decimal)(1e+6) * sec;
            decimal nanos = (decimal) (1e+9) * sec;



            Console.WriteLine(
                "{0} centuries = {1} years = {2} days = {3} hours = {4} minutes = {5} seconds = {6} milliseconds = {7} microseconds = {8} nanoseconds",
               centuries, years, days, hours, min, sec, millis, micros, nanos); 
        }
    }
}
