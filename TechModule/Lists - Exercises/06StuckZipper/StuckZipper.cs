namespace _StuckZipper
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class Program
    {
        static void Main(string[] args)
        {
            var firstList = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
            var secndList = Console.ReadLine().Split(' ').Select(int.Parse).ToList();

            // Идеален брой цифри
            var idealNumberOfDigits = CalculateIdealNumbeOfDigits(firstList, secndList);

            for (int i = 0; i < firstList.Count; i++)
            {
                var currentNumberOfDigits = CalculateNumberOfDigits(firstList[i]);
                if (currentNumberOfDigits > idealNumberOfDigits)
                {
                    firstList.RemoveAt(i);
                    i--;
                }
            }

            for (int i = 0; i < secndList.Count; i++)
            {
                var currentNumberOfDigits = CalculateNumberOfDigits(secndList[i]);
                if (currentNumberOfDigits > idealNumberOfDigits)
                {
                    secndList.RemoveAt(i);
                    i--;
                }
            }
        }

        private static int CalculateIdealNumbeOfDigits(List<int> firstList, List<int> secndList)
        {
            var idealNumberOfDigits = int.MaxValue;
            foreach (var item in firstList)
            {
                var numberOfDigits = CalculateNumberOfDigits(item);
                if (numberOfDigits < idealNumberOfDigits)
                {
                    idealNumberOfDigits = numberOfDigits;
                }
            }
            foreach (var item in secndList)
            {
                var numberOfDigits = CalculateNumberOfDigits(item);
                if (numberOfDigits < idealNumberOfDigits)
                {
                    idealNumberOfDigits = numberOfDigits;
                }
            }

            return idealNumberOfDigits;
        }

        private static int CalculateNumberOfDigits(int number)
        {
            number = Math.Abs(number);

            var numberOfDigits = 0;
            while (number > 0)
            {
                numberOfDigits++;
                number /= 10;
            }
            return numberOfDigits;
        }
    }
}
