using System;

namespace Square_Area
{
    class Program
    {
        static void Main(string[] args)
        {
            double squareSide = double.Parse(Console.ReadLine());

            double squareArea = Math.Pow(squareSide, 2);

            Console.WriteLine("Square Area is: {0:f2} ", squareArea);
        
        }
    }
}
