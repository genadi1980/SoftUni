using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _09MetricConverter
{
    public class MetricConverter
    {
        public static void Main()
        {
            var number = double.Parse(Console.ReadLine());
            var entryMetric = Console.ReadLine();
            var outputMetric = Console.ReadLine();
            var convertedEntry = 0D;
            var result = 0D;
            double outputEntry = 0;

            switch (entryMetric)
            {
                case "m":  convertedEntry = 1; break;
                case "mm": convertedEntry = 0.001; break;
                case "cm": convertedEntry = 0.01;  break;
                case "mi": convertedEntry = 1 / 0.000621371192; break;
                case "in": convertedEntry = 1 / 39.3700787; break;
                case "km": convertedEntry = 1 / 0.001;  break;
                case "ft": convertedEntry = 1 / 3.2808399;  break;
                case "yd": convertedEntry = 1 / 1.0936133;  break;
            }



            switch (outputMetric)
            {
                case "m":  outputEntry = 1; break;
                case "mm": outputEntry = 1000; break;
                case "cm": outputEntry = 100; break;
                case "mi": outputEntry = 0.000621371192; break;
                case "in": outputEntry = 39.3700787; break;
                case "km": outputEntry = 0.001; break;
                case "ft": outputEntry = 3.2808399; break;
                case "yd": outputEntry = 1.0936133; break;
            }


            result = (number * convertedEntry) * outputEntry;
            Console.WriteLine("{0:f8}", result);
        }
    }
}
