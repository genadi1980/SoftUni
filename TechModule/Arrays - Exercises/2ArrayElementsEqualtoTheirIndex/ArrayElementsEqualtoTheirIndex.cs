namespace _2ArrayElementsEqualtoTheirIndex
{
    using System;
    using System.Linq;
    
    class ArrayElementsEqualtoTheirIndex

    {
        static void Main()
        {
            int[] arrayInput = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

            for (int i = 0; i < arrayInput.Length; i++)
            {
                if (arrayInput[i] == i)
                {
                    Console.Write(i + " ");
                }
            }
            Console.WriteLine();
        }
    }
}
