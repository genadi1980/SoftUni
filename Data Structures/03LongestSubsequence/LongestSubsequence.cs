namespace _03LongestSubsequence
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class LongestSubsequence
    {
         public static void Main()
        {
            IList<int> numbers = Console.ReadLine().
                Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries)
                .Select(int.Parse)
                .ToList();

            Console.WriteLine(string.Join(" ", GetLongestSubsequence(numbers)));


        }

        private static IList<int> GetLongestSubsequence(IList<int> numbers)
        {
            IList<int> longestSubsequence = new List<int>();

            if (numbers.Any())
            {
                longestSubsequence = numbers.
                    Select((n, i) => new {Value = n, Index = i })
                    .OrderBy(s => s.Value)
                    .Select((o, i) => new { o.Value, Diff = i - o.Index })
                    .GroupBy(s =>  new {s.Value, s.Diff })
                    .OrderByDescending(g => g.Count())
                    .First()
                    .Select(f => f.Value)
                    .ToList();
            }
            return longestSubsequence;
        }
    }
    
}
