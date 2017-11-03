namespace _01TrainingLab
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class TrainingLab
    {
        public static void Main()
        {
            var w = double.Parse(Console.ReadLine());
            var h = double.Parse(Console.ReadLine());
            var koridorHeight = 100;
            var wPlaceWidth = 120;
            var wPlaceHeight = 70;
            
            var lostPlaces = 3;

            var widthWhole = h * 100;
            var lengthWhole = w * 100;

            var tablesInRowWidth = (int) (widthWhole - koridorHeight) / wPlaceHeight;
            var tableInRowHeight = (int) lengthWhole  / wPlaceWidth;



            var workingPlaces = tableInRowHeight * tablesInRowWidth - lostPlaces;

            Console.WriteLine(workingPlaces);


            

        }
    }
}
