namespace _StuckZipper
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    

    class Program
    {
        static void Main(string[] args)
        {
            var firstList = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
            var secondList = Console.ReadLine().Split(' ').Select(int.Parse).ToList();

            
            var idealNumberOfDigits = CalculateIdealNumbeOfDigits(firstList, secondList);
            RemoveElements(firstList, idealNumberOfDigits);
            RemoveElements(secondList, idealNumberOfDigits);

            var insertionIndex = 1;
            for (int i = 0; i < firstList.Count; i++)
            {
                secondList.Insert(Math.Min(insertionIndex, secondList.Count), firstList[i]);
                insertionIndex += 2;  
            }

            Console.WriteLine(string.Join(" ", secondList));
        }

         static void RemoveElements(List<int> List, int idealNumberOfDigits)
        {
            for (int i = 0; i < List.Count; i++)
            {
                var currentElement = List[i];
                var currentNumberOfDigits = CalculateNumberOfDigits(currentElement);
                if (currentNumberOfDigits > idealNumberOfDigits)
                {
                    List.RemoveAt(i);
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
