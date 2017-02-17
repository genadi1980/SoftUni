namespace _04CountOccurrencesofLargerNumbersinArray
{
    using System;
    using System.Linq;
    
    class CountOccurrencesofLargerNumbersinArray
    {
        static void Main()
        {
            double[] arrayInput = Console.ReadLine().Split(' ').Select(double.Parse).ToArray();
            var n = double.Parse(Console.ReadLine());
            var count = 0;
            for (int i = 0; i < arrayInput.Length; i++)
            {
                if (arrayInput[i] >= n)
                {
                    count++;
                }
            }

            Console.WriteLine(count);

        }
    }
}
