using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExamsTests
{
    class DailyProfit
    {
        static void Main(string[] args)
        {
            int workingDays = int.Parse(Console.ReadLine());
            double payDays = double.Parse(Console.ReadLine());
            double dollarCourse = double.Parse(Console.ReadLine());

            double salary = workingDays * payDays;
            double yearSalary = (12 * salary) + (2.5 * salary);
            double taxes = 0.25 * yearSalary;

            double yearProfit = (yearSalary - taxes) * dollarCourse;
            double avarageProfit = yearProfit / 365;

            Console.WriteLine(Math.Round(avarageProfit,2));
           
        }
    }
}
