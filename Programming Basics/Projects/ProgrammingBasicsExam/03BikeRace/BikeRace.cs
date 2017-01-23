using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _03BikeRace
{
    class BikeRace
    {
        static void Main(string[] args)
        {
            int countJunior = int.Parse(Console.ReadLine());
            int countSeniors = int.Parse(Console.ReadLine());
            String typeRace = Console.ReadLine();

            double juniorTax = 0.00;
            double seniorTax = 0.00;
            double juniorSum = 0.00;
            double seniorSum = 0.00;
            double spents = 0.00;
            double totalSum = 0.00;
            double left = 0.00;
            int totalRacers = countJunior + countSeniors;



            if (typeRace == "cross-country")
            {
                juniorTax = 8;
                seniorTax = 9.50;
                if (totalRacers >= 50)
                {
                    juniorTax -= juniorTax * 0.25;
                    seniorTax -= seniorTax * 0.25;
                }
                
            }

            else if (typeRace == "trail")
            {
                juniorTax = 5.50;
                seniorTax = 7.00;
            }
            

            else if (typeRace == "downhill")
            {
                juniorTax = 12.25;
                seniorTax = 13.75;
               
            }

            else if (typeRace == "road")
            {
                juniorTax = 20;
                seniorTax = 21.50;
                
            }

            juniorSum = juniorTax * countJunior;
            seniorSum = seniorTax * countSeniors;            

            totalSum = juniorSum + seniorSum;
            spents = totalSum * 0.05;
            left = totalSum - spents;

            Console.WriteLine("{0:f2}", left);




        }
    }
}
