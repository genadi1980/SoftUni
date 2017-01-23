using System;


namespace LatinLetters
{
    class LatinLetters
    {
        static void Main(string[] args)
        {
            for (var letter = 'a'; letter <= 'z'; letter++)
            {
                Console.Write(" " + letter);
            }
            Console.WriteLine();
        }
    }
}
