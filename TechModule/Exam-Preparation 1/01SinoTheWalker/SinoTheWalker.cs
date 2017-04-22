namespace _01SinoTheWalker
{
    using System;
    using System.Globalization;
    
    public class SinoDateTime
    {
        public static void Main()
        {

            var timeFormat = @"hh\:mm\:ss";
            var leavingTime = TimeSpan.ParseExact(Console.ReadLine(), timeFormat, CultureInfo.InvariantCulture);

            var steps = decimal.Parse(Console.ReadLine());
            var timePerStep = decimal.Parse(Console.ReadLine());

            var secondsInDay = 60 * 60 * 24;
            var totalSeconds = (int)(steps * timePerStep % secondsInDay);

            var timeNeeded = leavingTime.Add(new TimeSpan(0, 0, totalSeconds));
            

            Console.WriteLine("Time Arrival: " + timeNeeded.ToString(timeFormat));
              
            
        }
    }
}
