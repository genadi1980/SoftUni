namespace Dictionaries___Exercises
{
    using System;
    using System.Collections.Generic;
    using System.Linq;

    class LetterRepetition
    {
        static void Main()
        {
            var inputString = Console.ReadLine();
            var lettersCount = new Dictionary<char, int>();

            foreach (var letter in inputString)
            {
                if (!lettersCount.ContainsKey(letter))
                {
                    lettersCount[letter] = 0;
                }
                    lettersCount[letter]++;
            }

            foreach (var letterCountPair in lettersCount)
            {
                var letter = letterCountPair.Key;
                var count = letterCountPair.Value;
                Console.WriteLine($"{letter} -> {count}");
            }
        }
    }
}
