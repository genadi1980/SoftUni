using System;


namespace MaxNumber
{
    class MaxNumber
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int min = int.Parse(Console.ReadLine());

            for (int i = 0; i < n - 1; i++)
            {
                int num = int.Parse(Console.ReadLine());
                if (num < min)
                {
                    min = num;
                }

            }
            Console.WriteLine("Max number is: " + min);
        }
    }
}
