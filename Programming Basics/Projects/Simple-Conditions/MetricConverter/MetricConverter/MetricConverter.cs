using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MetricConverter
{
    class MetricConverter
    {
        static void Main(string[] args)
        {
            var inputNumber = double.Parse(Console.ReadLine());
            var inputMetric = Console.ReadLine();
            var outputMetric = Console.ReadLine();
            double meterNumber = 0.0;
            

            //input metric logic
            if (inputMetric == "m")
            {
                 meterNumber = inputNumber;

            }
            else if (inputMetric == "mm")
            {
                meterNumber = inputNumber / 1000;
            }
            else if (inputMetric == "cm")
            {
                meterNumber = inputNumber / 100;
            }
            else if (inputMetric == "mi")
            {
                meterNumber = inputNumber / 0.000621371192;
            }
            else if (inputMetric == "in")
            {
                meterNumber = inputNumber / 39.3700787;
            }
            else if (inputMetric == "km")
            {
                meterNumber = inputNumber / 0.001;
            }
            else if (inputMetric == "ft")
            {
                meterNumber = inputNumber / 3.2808399;
            }
            else if (inputMetric == "yd")
            {
                meterNumber = inputNumber / 1.0936133;
            }
            
            //Output metric logic
            if (outputMetric == "m")
            {
                Console.WriteLine("{0} m", meterNumber);
            }
           else if (outputMetric == "mm")
            {
                
                Console.WriteLine("{0} mm", meterNumber * 1000);
            }
            else if (outputMetric == "cm")
            {
                Console.WriteLine("{0} cm", meterNumber * 100);
            }
            else if (outputMetric == "mi")
            {
                Console.WriteLine("{0} mi", meterNumber * 0.000621371192);
            }
            else if (outputMetric == "in")
            {
                Console.WriteLine("{0} in", meterNumber * 39.3700787);
            }
            else if (outputMetric == "km")
            {
                Console.WriteLine("{0} km", meterNumber * 0.001);
            }
            else if (outputMetric == "ft")
            {
                Console.WriteLine("{0} ft", meterNumber * 3.2808399);
            }
            else if (outputMetric == "yd")
            {
                Console.WriteLine("{0} yd", meterNumber * 1.0936133);
            }
            

        }
    }
}
