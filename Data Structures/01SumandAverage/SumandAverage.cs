
namespace _01SumandAverage
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;


    class SumandAverage
    {
        static void Main(string[] args)
        {
            var numbers = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
            var sum = numbers.Sum();
            var avarage = sum / (double)numbers.Count();

            Console.WriteLine($"Sum={sum}; Average={avarage:F2}");
        }
    }
}
