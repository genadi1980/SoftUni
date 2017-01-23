using System;

namespace Trapezoid_Area
{
    class Program
    {
        static void Main(string[] args)
        {
            var smallBase = double.Parse(Console.ReadLine());
            var largeBase = double.Parse(Console.ReadLine());
            var height = double.Parse(Console.ReadLine());

            var TrapezoidArea = (smallBase + largeBase) * height / 2;
            Console.WriteLine("Calculated Trapezoid Area is: {0:f2}", TrapezoidArea);
               
              
        }
    }
}
