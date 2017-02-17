namespace _03CountofGivenElementinArray
{
    using System;
    using System.Linq;

    class CountofGivenElementinArray
    {
        static void Main()
        {
            int[] arrayInput = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int digit = int.Parse(Console.ReadLine());
            var count = 0;
            for (int i = 0; i < arrayInput.Length; i++)
            {                
                if (arrayInput[i] == digit)
                {
                    count++;
                }
            }

            Console.WriteLine(count);
        }
    }
}
