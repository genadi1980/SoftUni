using System;

namespace RadianstoDegrees
{
    class RadianstoDegrees
    {
        static void Main(string[] args)
        {
            var radians = double.Parse(Console.ReadLine());

            var degree = radians * 57.29578f;
            Console.WriteLine("Radians to Degrees: {0}", Math.Round(degree,2));
            
        }
    }
}
