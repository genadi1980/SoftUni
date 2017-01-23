using System;

namespace TriangleArea
{
    class TriangleArea
    {
        static void Main(string[] args)
        {
            var sideTriangle = double.Parse(Console.ReadLine());
            var heightTriangle = double.Parse(Console.ReadLine());

            var areaTriangle = sideTriangle * heightTriangle / 2;

            Console.WriteLine("Triangle Area is: {0}", Math.Round(areaTriangle,2));
        }
    }
}
