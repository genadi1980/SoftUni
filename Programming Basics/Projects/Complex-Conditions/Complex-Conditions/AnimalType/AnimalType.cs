using System;


namespace AnimalType
{
    class AnimalType
    {
        static void Main(string[] args)
        {
            var animal = Console.ReadLine();

            if (animal == "dog") Console.WriteLine("mammal");
            else if (animal == "crocodile" || animal == "tortoise" || animal == "snake") Console.WriteLine("reptile");
            else Console.WriteLine("unknown");
            
        }
    }
}
