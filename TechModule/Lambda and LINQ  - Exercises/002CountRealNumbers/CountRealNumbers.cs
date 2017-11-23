namespace _002CountRealNumbers
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class CountRealNumbers
    {
        static void Main(string[] args)
        {
            SortedDictionary<double, int> countNumbers = new SortedDictionary<double, int>();

            double[] numbers = Console.ReadLine().Split(' ').Select(double.Parse).ToArray();
            
            foreach (var number in numbers)
            {
                if (!countNumbers.ContainsKey(number))
                {
                    countNumbers[number] = 0;
                }
                countNumbers[number]++;
            }

            foreach (var count in countNumbers)
            {
                Console.WriteLine($"{count.Key} -> {count.Value}");
            }


        }
    }
}
