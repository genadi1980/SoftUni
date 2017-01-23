using System;

namespace Circle_AreaAndPerimeter
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Please, enter a radius of the circle");
            var radiusCircle = double.Parse(Console.ReadLine());
            var areaCircle = Math.PI * Math.Pow(radiusCircle, 2);
            var perimeterCircle = 2 * Math.PI * radiusCircle;

            Console.WriteLine("Circle Area is {0:f2} and Circle Perimeter is: {1:f2}", areaCircle, perimeterCircle);

        }
    }
}
