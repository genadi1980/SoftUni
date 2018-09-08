using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _14PointonRectangleBorder
{
    class PointonRectangleBorder
    {
        static void Main()
        {
            var x1 = double.Parse(Console.ReadLine());
            var y1 = double.Parse(Console.ReadLine());
            var x2 = double.Parse(Console.ReadLine());
            var y2 = double.Parse(Console.ReadLine());            
            var x =  double.Parse(Console.ReadLine());
            var y =  double.Parse(Console.ReadLine());

            bool isInside = ((x > x1 && x < x2 && y > y1 && y < y2) || 
                    ((x < x1 || x > x2 || y < y1 || y > y2)));

            if (isInside)
            {
                Console.WriteLine("Inside / Outside");
            }
            else Console.WriteLine("Border");
        }
    }
}
