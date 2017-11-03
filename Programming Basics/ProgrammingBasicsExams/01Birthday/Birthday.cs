namespace _01Birthday
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class Birthday
    {
        static void Main(string[] args)
        {
            var length = int.Parse(Console.ReadLine());
            var width = int.Parse(Console.ReadLine());
            var height = int.Parse(Console.ReadLine());
            var percent = double.Parse(Console.ReadLine());

            var volume = length * width * height;
            var liters = volume * 0.001;

            var percentValue = percent * 0.01;

            var aquariumWater = liters * (1 - percentValue);

            Console.WriteLine($"{aquariumWater:f3}");


        }
    }
}
