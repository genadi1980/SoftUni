using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _11AreaofFigures
{
    public class AreaofFigures
    {
        public static void Main()
        {
            var figureType = Console.ReadLine();
            var areaOfFigure = 0D;

            if (figureType == "square")
            {
                var sideSquare = double.Parse(Console.ReadLine());

                areaOfFigure = sideSquare * sideSquare;
            }
            else if (figureType == "rectangle")
            {
                var side1 = double.Parse(Console.ReadLine());
                var side2 = double.Parse(Console.ReadLine());

                areaOfFigure = side1 * side2;
            }
            else if (figureType == "circle")
            {
                var r = double.Parse(Console.ReadLine());

                areaOfFigure = Math.PI * r * r;
            }

            else if (figureType == "triangle")
            {
                var side = double.Parse(Console.ReadLine());
                var height = double.Parse(Console.ReadLine());
                areaOfFigure = side * height / 2;
            }
            Console.WriteLine(Math.Round(areaOfFigure, 3));
        }
    }
}
