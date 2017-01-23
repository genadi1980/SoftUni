using System;

namespace CelsiustoFahrenheit
{
    class Program
    {
        static void Main(string[] args)
        {
            var celsiusTemperature = double.Parse(Console.ReadLine());
            var fahrenheightTemperature = (celsiusTemperature * 1.8) + 32;
            Console.WriteLine(Math.Round(fahrenheightTemperature,2));

                
        }
    }
}
