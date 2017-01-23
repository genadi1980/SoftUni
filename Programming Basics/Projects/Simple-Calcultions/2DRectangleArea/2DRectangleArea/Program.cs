using System;

namespace _2DRectangleArea
{
    class Program
    {
        static void Main(string[] args)
        {
            var x1 = double.Parse(Console.ReadLine());
            var y1 = double.Parse(Console.ReadLine());
            var x2 = double.Parse(Console.ReadLine());
            var y2 = double.Parse(Console.ReadLine());

            var rectBaseSide = Math.Abs(x1 - x2);
            //Console.WriteLine("rectBaseSide: {0}", rectBaseSide);
            var rectHeightSide = Math.Abs(y1 - y2);
            //Console.WriteLine("rectHeightSide: {0}", rectHeightSide);
            var rectArea = rectBaseSide * rectHeightSide;
            var rectPerimeter = 2 * (rectBaseSide + rectHeightSide);

            Console.WriteLine("Rectangular Area is {0:f2}", rectArea);
            Console.WriteLine("Rectangular Perimeter is {0:f2}", rectPerimeter);
        }
    }
}
