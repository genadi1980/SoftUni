using System;


namespace FruitorVegetable
{
    class FruitorVegetable
    {
        static void Main()
        {
            var product = Console.ReadLine();

            if (product == "banana" || product == "apple" || product == "kiwi" || product == "cherry" || product == "lemon" || product == "grapes")
            {
                Console.WriteLine("Fruit");
            }
            else if (product == "tomato" || product == "cucumber" || product == "pepper" || product == "carrot")
            {
                Console.WriteLine("Vegetable");
            }
            else Console.WriteLine("Unknown");
        }
    }
}
