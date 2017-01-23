using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _04Logistics
{
    class Logistics
    {
        static void Main(string[] args)
        {
            int numLoads = int.Parse(Console.ReadLine());
            int pricePerTon = 0;
            double allLoads = 0;
            int microbusPrice = 0;
            int microbusWeight = 0;
            int truckPrice = 0;
            int truckWeight = 0;
            int trainPrice = 0;
            int trainWeight = 0;
            double avaragePricePerTon = 0.0;
            double sumWeight = 0.00;
            double withMicrobus = 0.00;
            double withTruck = 0.00;
            double withTrain = 0.00;


            for (int count = 0; count < numLoads; count++)
            {
                int loadWeight = int.Parse(Console.ReadLine());
                allLoads += loadWeight;

                
                if(loadWeight <= 3)
                {
                    pricePerTon = 200;
                    microbusPrice = (loadWeight * pricePerTon);
                    sumWeight += microbusPrice;
                    microbusWeight += loadWeight;
                    

                }

                if (loadWeight>= 4 && loadWeight <= 11)
                {
                    pricePerTon = 175;
                    truckPrice = (loadWeight * pricePerTon);
                    sumWeight += truckPrice;
                    truckWeight += loadWeight;
                }
                if(loadWeight >= 12)
                {
                    pricePerTon = 120;
                    trainPrice = (loadWeight * pricePerTon);
                    sumWeight += trainPrice;
                    trainWeight += loadWeight;
                }

                
               
            }
            withMicrobus += (microbusWeight / allLoads) * 100;
            withTruck += (truckWeight / allLoads) * 100;
            withTrain += (trainWeight / allLoads) * 100;
            avaragePricePerTon = sumWeight / allLoads;
            
            Console.WriteLine("{0:f2}%", avaragePricePerTon);
            Console.WriteLine("{0:f2}%", withMicrobus);
            Console.WriteLine("{0:f2}%", withTruck);
            Console.WriteLine("{0:f2}%", withTrain);
        }
    }
}
