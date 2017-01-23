using System;

namespace USDtoBGN
{
    class Program
    {
        static void Main(string[] args)
        {
            var usd = decimal.Parse(Console.ReadLine());
            var bgn = usd * 1.79549M;

            Console.WriteLine(bgn);
        }
    }
}
