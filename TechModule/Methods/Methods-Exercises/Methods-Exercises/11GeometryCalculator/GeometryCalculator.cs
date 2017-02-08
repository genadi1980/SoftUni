using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _11GeometryCalculator
{
    class GeometryCalculator
    {
        static void Main(string[] args)
        {
            string typeOfFigure =  Console.ReadLine().ToLower();
            if (typeOfFigure == "triangle") GetTriangleArea();
            else if (typeOfFigure == "square") GetSwquareArea();
            else if (typeOfFigure == "rectangle") GetRectangleArea();
            else if (typeOfFigure == "circle") GetCircleArea();
        }

        private static void GetCircleArea()
        {
            double radius = double.Parse(Console.ReadLine());

            double area = Math.PI * radius * radius;
            Console.WriteLine("{0:f2}", area);
        }

        private static void GetRectangleArea()
        {
            double wide = double.Parse(Console.ReadLine());
            double length = double.Parse(Console.ReadLine());

            double area;
            area = wide * length;

            Console.WriteLine("{0:f2}", area);
        }

        private static void GetSwquareArea()
        {
            double side = double.Parse(Console.ReadLine());

            double area = side * side;
            Console.WriteLine("{0:f2}", area);
        }

        private static void GetTriangleArea()
        {
            double side = double.Parse(Console.ReadLine());
            double height = double.Parse(Console.ReadLine());

            double area;
            area = height * side / 2;

            Console.WriteLine("{0:f2}", area);

        }
    }
}
