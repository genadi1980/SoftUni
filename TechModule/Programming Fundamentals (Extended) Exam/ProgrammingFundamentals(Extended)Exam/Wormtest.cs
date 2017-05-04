namespace ProgrammingFundamentals_Extended_Exam
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class Wormtest
    {
        public static void Main()
        {
            var lengthWorm = long.Parse(Console.ReadLine());
            var widthWorm = double.Parse(Console.ReadLine());

            var convertedLenghtInCM = lengthWorm * 100;

            double reminder = (double) convertedLenghtInCM % widthWorm;

            double lengthWidth = convertedLenghtInCM / widthWorm * 100;

            double product = convertedLenghtInCM * widthWorm;

            if (reminder > 0)
            {

                Console.WriteLine("{0:F2}%", lengthWidth);
            }
            else
            {
                
                Console.WriteLine("{0:F2}", product);
            }
        }
    }
}
