using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _07FruitorVegetable
{
    public class FruitorVegetable
    {
        public static void Main()
        {
            var input = Console.ReadLine();

            if (input == "banana" || input == "apple" || input == "kiwi"
                || input == "cherry" || input == "lemon" || input == "grapes")
            {
                Console.WriteLine("fruit");
            }
            else if (input == "tomato" || input == "cucumber" 
                || input == "pepper" || input == "carrot")
            {
                Console.WriteLine("vegetable");
            }
            else
            {
                Console.WriteLine("unknown");
            }
        }
    }
}
