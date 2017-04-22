namespace _01SinoTheWalker
{
    using System;
    using System.Globalization;

    public class SinoTheWalker
    {
        public static void Main()
        {

            var timeFormat = "HH:mm:ss";
            var leavingTime = DateTime.ParseExact(Console.ReadLine(), timeFormat, CultureInfo.InvariantCulture);

            var steps = decimal.Parse(Console.ReadLine());
            var timePerStep = decimal.Parse(Console.ReadLine());

            var secondsInDay = 60 * 60 * 24;
            var totalSeconds = (int)(steps * timePerStep % secondsInDay);

            var timeNeeded = leavingTime.AddSeconds(totalSeconds);


            Console.WriteLine("Time Arrival: " + timeNeeded.ToString(timeFormat));



        }
    }
}