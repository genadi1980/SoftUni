using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _02FlowerShop
{
    class FlowerShop
    {
        static void Main(string[] args)
        {
            var priceMagnolii = 3.25;
            var priceRose = 3.50;
            var priceZumbul = 4.00;
            var priceKaktus = 8.00;

            int countMag = int.Parse(Console.ReadLine());
            int countZum = int.Parse(Console.ReadLine());
            int countRose = int.Parse(Console.ReadLine());
            int countKaktus = int.Parse(Console.ReadLine());
            double priceGift = double.Parse(Console.ReadLine());

            double sum = (countMag * priceMagnolii) + (countZum * priceZumbul) + (countRose * priceRose) + (countKaktus * priceKaktus);
            double taxes = sum * 0.05;
            double profit = sum - taxes;
            double difference = Math.Abs(profit - priceGift);

            if ( profit >=  priceGift)
            {
                var left = Math.Floor(difference);
                Console.WriteLine("She is left with {0} leva.", left);
            }
            else
            {
                var borrow = Math.Ceiling(difference);
                Console.WriteLine("She will have to borrow {0} leva.", borrow);
            }

        }
    }
}
