using System;

namespace Inches_to_Centimeters
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter Inches: ");

            var inputInches = double.Parse(Console.ReadLine());
            var outputCentimeters = inputInches * 2.54;

            Console.WriteLine("Converted Centimeters are: {0:f2} ", outputCentimeters);
        
        }
    }
}
