using System;


namespace PointintheFigure
{
    class PointintheFigure
    {
        static void Main(string[] args)
        {
            int h = int.Parse(Console.ReadLine());
            int PointX = int.Parse(Console.ReadLine());
            int PointY = int.Parse(Console.ReadLine());

            // Rectangle 1
            int x1 = 0;
            int y1 = 0;

            int x2 = 3 * h;
            int y2 = h;

            // Rectangle 2
            int x3 = h;
            int y3 = h;

            int x4 = 2 * h;
            int y4 = 4 * h;

            var isInside = ((PointX >= x1 && PointY >= y1) && (PointX <= x2 && PointY <= y2))
                                && ((PointX >= x3 && PointY >= y3) && (PointX <= x4 && PointY <= y4));
            //var isOutside = (PointX < x1 && PointY < y1 && PointX > x2 && PointY > y2)
            //                    && (PointX < 0 && PointY < 0 && PointX > x4 && PointY > y4);
            Console.WriteLine(isInside);

            if (!isInside)
            {
                Console.WriteLine("outside");
            }
            else
            {
                Console.WriteLine("inside");
            }
            

        }
    }
}
