namespace _01RemoveElementsatOddPositions
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    
    class RemoveElementsatOddPositions
    {
        static void Main()
        {
            var input = Console.ReadLine().Split(' ').ToList();
            var output = new List<string>();
            for (int i = 0; i < input.Count; i++)
            {
                if (i % 2 != 0)
                {
                    output.Add(input[i]);                   
                }
            }
            foreach (var outputItems in output)
            {
                Console.Write(outputItems);
            }
            Console.WriteLine();
        }
    }
}
