using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _12RectangleProperties
{
    class Rectangle
    {
        static void Main(string[] args)
        {
            double wight = double.Parse(Console.ReadLine());
            double height = double.Parse(Console.ReadLine());

            double rectArea = CalcRectArea(wight,height);
            double rectPerim = CalcRectPerim(wight, height);
            double rectDiagonal = CalcRectDiagonal(wight, height);

            Console.WriteLine(rectPerim);
            Console.WriteLine(rectArea);            
            Console.WriteLine(rectDiagonal);
        }

        private static double CalcRectDiagonal(double line1, double line2)
        {
            double Diagonal = Math.Sqrt(Math.Pow(line1, 2) + Math.Pow(line2, 2));
            return Diagonal;
        }

        private static double CalcRectPerim(double side1, double side2)
        {
            double Perimeter = 2 * (side1 + side2);
            return Perimeter;
        }

        private static double CalcRectArea(double num1, double num2)
        {
            double Area = num1 * num2;
                return Area;
        }
    }
}
