using System;
using System.Globalization;

class HolidaysBetweenTwoDates
{
    static void Main()
    {
        var startDate = DateTime.ParseExact(Console.ReadLine(),
           "d.M.yyyy", CultureInfo.InvariantCulture); //1 
        var endDate = DateTime.ParseExact(Console.ReadLine(),
           "d.M.yyyy", CultureInfo.InvariantCulture); //2
        var holidaysCount = 0;
        for (var date = startDate; date <= endDate; date = date.AddDays(1))//4 
            if (date.DayOfWeek == DayOfWeek.Saturday || //3
                date.DayOfWeek == DayOfWeek.Sunday) holidaysCount++;
        Console.WriteLine(holidaysCount);
    }
}
