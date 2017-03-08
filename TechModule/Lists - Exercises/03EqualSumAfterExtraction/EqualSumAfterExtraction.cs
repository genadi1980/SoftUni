namespace _03EqualSumAfterExtraction
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class EqualSumAfterExtraction
    {
        static void Main()
        {
            var firstList = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
            var secondList = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
            var diff = 0;
            int firstListSum = 0;
            int secondListSum = 0;

            foreach (var item in firstList)
            {
                firstListSum += item;
            }

            
            foreach (var number in secondList)
            {
                if (!firstList.Contains(number))
                {                    
                    secondListSum += number;
                }
            }

            if (firstListSum == secondListSum)
            {
                Console.WriteLine($"Yes. Sum: {firstListSum}");
            }
            else
            {
                diff = Math.Abs(firstListSum - secondListSum);
                Console.WriteLine($"No. Diff: {diff}");
            }
            
        }
    }
}
