namespace _05IncreasingSequenceofElements
{
    using System;
    using System.Linq;

    class IncreasingSequenceofElements
    {
        static void Main()
        {
            int[] arrayInput = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            bool isIncremental = true;

            for (int i = 1; i < arrayInput.Length; i++)
            {
                if (arrayInput[i] > arrayInput[i - 1])
                {
                    isIncremental = true;
                                  
                }
                else
                {
                    isIncremental = false;
                    
                }              

            }
            if (isIncremental)
            {
                Console.WriteLine("Yes");
            }
            else
            {
                Console.WriteLine("No");
            }
        }
    }
}
