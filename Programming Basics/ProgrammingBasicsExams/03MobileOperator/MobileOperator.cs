namespace _03MobileOperator
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class Program
    {
        static void Main()
        {
            var contractDur = Console.ReadLine();
            var contractType = Console.ReadLine();
            var addInternet = Console.ReadLine();
            var monthCount = int.Parse(Console.ReadLine());

            var montlyTax = 0D;
            var totalSum = 0D;


            switch (contractType)
            {
                case "Small":
                    if (contractDur == "one")
                    {
                        montlyTax = 9.98;
                    }
                    else if(contractDur == "two")
                    {
                        montlyTax = 8.58;
                    }
                break;
                case "Middle":
                    if (contractDur == "one")
                    {
                        montlyTax = 18.99;
                    }
                    else if (contractDur == "two")
                    {
                        montlyTax = 17.09;
                    }
                    break;

                case "Large":
                    if (contractDur == "one")
                    {
                        montlyTax = 25.98;
                    }
                    else if (contractDur == "two")
                    {
                        montlyTax = 23.59;
                    }
                    break;

                case "ExtraLarge":
                    if (contractDur == "one")
                    {
                        montlyTax = 35.99;
                    }
                    else if (contractDur == "two")
                    {
                        montlyTax = 31.79;
                    }
                    break;

                    
            }

            if (montlyTax <= 10.00 && addInternet == "yes")
            {
                montlyTax += 5.50;
            }

            else if(montlyTax > 10.00 && montlyTax <= 30 && addInternet == "yes")
            {
                montlyTax += 4.35;
            }

            else if (montlyTax > 30 && addInternet == "yes")
            {
                montlyTax += 3.85;
            }

            totalSum = montlyTax * monthCount;

            if (contractDur == "two")
            {
                totalSum -= totalSum * 0.0375;
            }

            Console.WriteLine("{0:f2} lv.", totalSum);
        }
    }
}
