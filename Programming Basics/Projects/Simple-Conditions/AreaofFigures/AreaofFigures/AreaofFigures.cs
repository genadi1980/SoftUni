using System;


namespace AreaofFigures
{
    class AreaofFigures
    {
        static void Main(string[] args)
        {
            var typeFigure = Console.ReadLine();

            if (typeFigure == "square")
            {
                var sideSquare = double.Parse(Console.ReadLine());
                var areaSquare = Math.Pow(sideSquare, 2);

                Console.WriteLine("{0:f3}", areaSquare);
            }
            else if (typeFigure == "rectangle")
            {
                var smallSide = double.Parse(Console.ReadLine());
                var largeSide = double.Parse(Console.ReadLine());

                Console.WriteLine("{0:f3}", smallSide * largeSide);
            }
            else if (typeFigure == "circle")
            {
                var radius = double.Parse(Console.ReadLine());
                Console.WriteLine("{0:f3}", Math.PI * Math.Pow(radius, 2));            
            }
            else if (typeFigure == "triangle")
            {
                var highTriangle = double.Parse(Console.ReadLine());
                var baseTriangle = double.Parse(Console.ReadLine());

                Console.WriteLine("{0:f3}", highTriangle * baseTriangle / 2);
            }
        }
    }
}
