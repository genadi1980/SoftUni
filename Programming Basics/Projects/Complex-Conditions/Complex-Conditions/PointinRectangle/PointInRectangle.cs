using System;


namespace PointinRectangle
{
    class PointInRectangle
    {
        static void Main()
        {
            var x1 = double.Parse(Console.ReadLine());
            var y1 = double.Parse(Console.ReadLine());
            var x2 = double.Parse(Console.ReadLine());
            var y2 = double.Parse(Console.ReadLine());
            var pointX = double.Parse(Console.ReadLine());
            var pointY = double.Parse(Console.ReadLine());

            var isInside = pointX >= x1 && pointY >= y1 && pointX <= x2 && pointY <= y2;
            if (isInside)
            {
                Console.WriteLine("Inside");
            }
            else Console.WriteLine("Outside");
        }
    }
}
