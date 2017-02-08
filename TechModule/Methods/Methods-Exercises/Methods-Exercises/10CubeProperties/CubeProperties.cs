using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _10CubeProperties
{
    class CubeProperties
    {
        static void Main(string[] args)
        {
            double side = double.Parse(Console.ReadLine());
            string parameter = Console.ReadLine();

            GetCubeParameter(side, parameter);
            

        }
        
        private static void GetCubeParameter(double sideLenght, string parameterType)
        {
            if (parameterType == "face")
            {
                double faceDiagonal;
                faceDiagonal = Math.Sqrt(2 * (sideLenght * sideLenght));
                Console.WriteLine("{0:f2}", faceDiagonal);
            }
            else if (parameterType == "space")
            {
                double spaceDiagonal;
                spaceDiagonal = Math.Sqrt(3 * (sideLenght * sideLenght));
                Console.WriteLine("{0:f2}", spaceDiagonal);
            }
            else if (parameterType == "volume")
            {
                double volume;
                volume = Math.Pow(sideLenght,3);
                Console.WriteLine("{0:f2}", volume);
            }
            else if (parameterType == "area")
            {
                double area;
                area = 6 * (sideLenght * sideLenght);
                Console.WriteLine("{0:f2}", area);
            }
        }

       
    }
}
