using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _17Cinema
{
    public class Cinema
    {
        public static void Main()
        {
            var type = Console.ReadLine().ToLower();
            var rows = int.Parse(Console.ReadLine());
            var cols = int.Parse(Console.ReadLine());

            var cinemaArea = rows * cols;

            var totalPrice = 0M;

            decimal price = 0M;

            if (type == "premiere") price = 12.00M;
            else if (type == "normal") price = 7.50M;
            else if (type == "discount") price = 5.00M;

            totalPrice = cinemaArea * price;

            Console.WriteLine("{0:f2}", totalPrice);
        }
    }
}
