namespace _001OddOccurrences
{
    using System;
    using System.Collections.Generic;
    
    public class OddOccurrences
    {
        public static void Main()
        {
            //Odd Occurrence - Odd number of times 

            var wordStoredge = new Dictionary<string,int>();

            //The input should be a sequence of words and numbers. 
            //They will be read as a string separated by space
            //Example: 3 5 5 hi pi HO Hi 5 ho 3 hi pi

            var input = Console.ReadLine().ToLower();

            string[] words = input.Split(' ');
            
            foreach (string word in words)
            {
                if (!wordStoredge.ContainsKey(word))
                {
                    wordStoredge[word] = 0;
                }
                wordStoredge[word]++;
            }

            //Save odd occurrences in a new list
            var results = new List<string>();

            foreach (var wordCountPair in wordStoredge)
            {
                var word = wordCountPair.Key;
                var count = wordCountPair.Value;

                if (count % 2 != 0)
                {
                    results.Add(word);
                }

            }

            //Print the results
            Console.WriteLine(string.Join(", ", results));



        }
    }
}
