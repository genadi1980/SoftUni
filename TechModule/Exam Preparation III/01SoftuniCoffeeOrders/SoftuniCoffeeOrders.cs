namespace _01SoftuniCoffeeOrders
{
    using System;
    using System.Collections.Generic;
    using System.Globalization;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class SoftuniCoffeeOrders
    {
        public static void Main()
        {

            // ((daysInMonth * capsulesCount) * pricePerCapsule)

            int n = int.Parse(Console.ReadLine());

            decimal totalPrice = 0M;
                               
            for (int i = 0; i < n; i++)
            {
                decimal pricePerCapsul = decimal.Parse(Console.ReadLine());

                DateTime orderDate = DateTime.ParseExact(Console.ReadLine(), "d/M/yyyy", CultureInfo.InvariantCulture);

                int capsuleCount = int.Parse(Console.ReadLine());

                decimal currentPrice = ((DateTime.DaysInMonth(orderDate.Year, orderDate.Month) * (long) capsuleCount) * pricePerCapsul);

                Console.WriteLine($"The price for the coffee is: ${currentPrice:F2}");

                totalPrice += currentPrice;
            }

            Console.WriteLine($"Total: ${totalPrice:F2}");
        }
        
    }
}
