using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace firm
{
    class firm
    {
        static void Main(string[] args)
        {
            int neededHours = int.Parse(Console.ReadLine());
            int availableDays = int.Parse(Console.ReadLine());
            int oooEmployees = int.Parse(Console.ReadLine());

            if (neededHours >= 0 && neededHours <= 200000 && availableDays >= 0 && 
                    availableDays <= 20000 && oooEmployees >= 0 && oooEmployees <= 200)
            {
                double trainingDays = availableDays * 0.1;
                double actualWorkingDays = availableDays - trainingDays;
                double workingHours = actualWorkingDays * 8;
                double oooHours = oooEmployees * (2 * availableDays);
                double totalHours = Math.Floor(workingHours + oooHours);

                if (totalHours >= neededHours) 
                {
                    double result = totalHours - neededHours;
                    Console.WriteLine("Yes!{0:0} hours left.",result);
                }
                else
                {
                    double result = neededHours - totalHours;
                    
                    Console.WriteLine("Not enough time!{0:0} hours needed.", result);
                }
               
            }
        }
    }
}
