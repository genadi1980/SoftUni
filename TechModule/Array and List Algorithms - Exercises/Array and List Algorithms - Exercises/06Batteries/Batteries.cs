namespace _06Batteries
{

    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class Batteries
    {
        static void Main()
        {
            var capacityList = Console.ReadLine().Split(' ').Select(double.Parse).ToList();
            var usagePerHour = Console.ReadLine().Split(' ').Select(double.Parse).ToList();
            var testHours = int.Parse(Console.ReadLine());
            string output = "";
            for (int i = 0; i < capacityList.Count; i++)
            {
                var capLeft = CapacityUsed(testHours, capacityList[i], usagePerHour[i]);
                var percentageLeft = (capLeft / capacityList[i]) * 100;
                var deadhours = Math.Ceiling((capacityList[i] / usagePerHour[i]));

                if (capLeft >= 0)
                {
                    output = "Battery {0}: {1:F2} mAh ({2:F2})%";
                }
                else if (capLeft < 0)
                {
                    output = $"Battery {i + 1}: dead (lasted {deadhours} hours)";
                }

                Console.WriteLine(output,i+1, capLeft, percentageLeft);
            }

            

        }
        static double CapacityUsed(int hours, double capacity, double usage)
        {
            var capacityLeft = 0d;

            capacityLeft = capacity - (usage * hours);            

            return capacityLeft;
        }
    }
}
