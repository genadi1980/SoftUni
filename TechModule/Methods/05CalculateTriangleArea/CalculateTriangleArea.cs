using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _05CalculateTriangleArea
{
    class CalculateTriangleArea
    {
        static double GetTriangleArea (double width, double height)
        {
            return width * height / 2;
        }

        static void Main(string[] args)
        {
            var width = double.Parse(Console.ReadLine());
            var height = double.Parse(Console.ReadLine());
            var Area = GetTriangleArea(width, height);
            Console.WriteLine(Area);
        }
    }
}
