using System;

namespace Excellent_Result
{
    class ExcellentResult
    {
        static void Main(string[] args)
        {
            var number = double.Parse(Console.ReadLine());

            if (number >= 5.50)
            {
                Console.WriteLine("Excellent!");
            }
            else
            {
                Console.WriteLine("Not Excelent");
            }
        }
    }
}
