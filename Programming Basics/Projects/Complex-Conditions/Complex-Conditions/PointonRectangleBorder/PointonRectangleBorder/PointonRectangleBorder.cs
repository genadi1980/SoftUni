using System;


namespace PointonRectangleBorder
{
    class PointonRectangleBorder
    {
        static void Main()
        {
            var x1 = double.Parse(Console.ReadLine());
            var y1 = double.Parse(Console.ReadLine());
            var x2 = double.Parse(Console.ReadLine());
            var y2 = double.Parse(Console.ReadLine());
            var pointX = double.Parse(Console.ReadLine());
            var pointY = double.Parse(Console.ReadLine());

            
            var onleftSide = (pointX == x1) && (pointY >= y1) && (pointY <= y2);
            var onRightSide = (pointX == x2) && (pointY >= y1) && (pointY <= y2);
            var onUpSide = (pointY == y1) && (pointX >= x1) && (pointX <= x2);
            var onDownSide = (pointY == y2) && (pointX >= x1) && (pointX <= x2);





            if (!(onleftSide || onRightSide || onUpSide || onDownSide))
            {
                Console.WriteLine("Inside/Outside");
            }
            else Console.WriteLine("Border");
        }
    }
}
