namespace _05CountofOccurrences
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class CountofOccurrences
    {
        public static void Main()
        {
            List<int> numbers = Console.ReadLine()
                .Split(new char[] {' '}, StringSplitOptions.RemoveEmptyEntries)
                .Select(int.Parse)
                .ToList();

            SortedDictionary<int, int> occurrences = new SortedDictionary<int, int>();

            for (int i = 0; i < numbers.Count; i++)
            {
                if (!occurrences.ContainsKey(numbers[i]))
                {
                    occurrences.Add(numbers[i], 0);
                }

                occurrences[numbers[i]] += 1;
            }

            foreach (var items in occurrences)
            {
                var number = items.Key;
                var times = items.Value;

                Console.WriteLine($"{number} -> {times} times");
            }
        }
    }
}
