using System;
namespace _1000DaysAfterBirth
{
    class Program
    {
        static void Main(string[] args)
        {
            var inputDate = Console.ReadLine();
            var format = "dd-MM-yyyy";

            var ourDate = DateTime.ParseExact(inputDate, format, null);
            var result = ourDate.AddDays(1000 -1);
            Console.WriteLine(result.ToString(format));
        }
    }
}
