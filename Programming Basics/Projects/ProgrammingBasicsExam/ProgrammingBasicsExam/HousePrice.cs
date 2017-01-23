using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ProgrammingBasicsExam
{
    class HousePrice
    {
        static void Main(string[] args)
        {
            double smallestRoom = double.Parse(Console.ReadLine());
            double kitchenArea = double.Parse(Console.ReadLine());
            double pricePerSqMeter = double.Parse(Console.ReadLine());

            double bathroom = smallestRoom / 2;
            double secondRoom = smallestRoom + (smallestRoom * 0.1);
            double thirdRoom = secondRoom + (secondRoom * 0.1);

            double houseArea = smallestRoom + kitchenArea + secondRoom + thirdRoom + bathroom;
            double corridorArea = houseArea * 0.05;
            double totalArea = houseArea + corridorArea;

            double housePrice = totalArea * pricePerSqMeter;
            
            Console.WriteLine("{0:f2}", housePrice);
        }
    }
}
