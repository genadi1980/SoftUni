using System;

namespace SmallShop
{
    class SmallShop
    {
        static void Main()
        {
            var product = Console.ReadLine();
            var city = Console.ReadLine();
            var quantity = double.Parse(Console.ReadLine());

            if (city == "Sofia")
            {
                if (product == "coffee") Console.WriteLine("{0:f2}", quantity * 0.50);                 
            
                else if (product == "water") Console.WriteLine("{0:f2}", quantity * 0.80);
                else if (product == "beer") Console.WriteLine("{0:f2}", quantity * 1.20);
                else if (product == "sweets") Console.WriteLine("{0:f2}", quantity * 1.45);
                else if (product == "peanuts") Console.WriteLine("{0:f2}", quantity * 1.60);

            }

            else if (city == "Plovdiv")
            {
                if (product == "coffee") Console.WriteLine("{0:f2}", quantity * 0.40);
                else if (product == "water") Console.WriteLine("{0:f2}",quantity * 0.70);
                else if (product == "beer")  Console.WriteLine("{0:f2}",quantity * 1.15);
                else if (product == "sweets") Console.WriteLine("{0:f2}",quantity * 1.30);
                else if (product == "peanuts") Console.WriteLine("{0:f2}",quantity * 1.50);
            }

            else if (city == "Varna")
            {
                if (product == "coffee")  Console.WriteLine("{0:f2}",quantity * 0.45);
                else if (product == "water") Console.WriteLine("{0:f2}",quantity * 0.70);
                else if (product == "beer") Console.WriteLine("{0:f2}",quantity * 1.10);
                else if (product == "sweets") Console.WriteLine("{0:f2}",quantity * 1.35);                
                else if (product == "peanuts") Console.WriteLine("{0:f2}",quantity * 1.55);
            }
        }
    }
}