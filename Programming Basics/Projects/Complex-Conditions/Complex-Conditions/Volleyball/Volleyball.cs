using System;


namespace Volleyball
{
    class Volleyball
    {
        static void Main(string[] args)
        {
            var yearType = Console.ReadLine().ToLower();
            var holidays = double.Parse(Console.ReadLine());
            var tripWeekends = double.Parse(Console.ReadLine());
            var SofiaWeekends = 48 - tripWeekends;
            var saterdayGames = SofiaWeekends * 3.0 / 4;
            var sundayGames = tripWeekends;
            var holidayGames = holidays * 2.0 / 3;
            var leapGames = 0.0;
            var sumGames = saterdayGames + holidayGames + sundayGames;

            if (yearType == "leap")
            {
                leapGames = sumGames * 0.15;
                Console.WriteLine(Math.Truncate(sumGames + leapGames));
            }
            else if( yearType == "normal")
            {
                Console.WriteLine(Math.Truncate(sumGames));
            }

        }
    }
}
