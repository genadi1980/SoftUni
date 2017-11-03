namespace _02TransportPrice
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class TransportPrice
    {
        public static void Main()
        {
            var km = int.Parse(Console.ReadLine());
            var DayNight = Console.ReadLine();

            var initialTax = 0.70;
            var busRange = 0.09;
            var trainRange = 0.06;
            var taxiRange = 0.79;

            if (DayNight == "night")
            {
                taxiRange = 0.9;
            }

            if (km < 20)
            {
                var taxiPrice = taxiRange * km + initialTax;
                Console.WriteLine(taxiPrice);
            }
            else if (km >= 20 && km < 100)
            {
                var busPrice = busRange * km;
                Console.WriteLine(busPrice);
            }
            else if (km >= 100)
            {
                var trainPrice = trainRange * km;
                Console.WriteLine(trainPrice);
            }
        }
    }
}
