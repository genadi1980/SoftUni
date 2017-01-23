using System;

namespace LeftandRightSum
{
    class LeftandRightSum
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int oddSum = 0;
            int evenSum = 0;
            for (int i = 0; i < n; i++)
            {
                int num = int.Parse(Console.ReadLine());
                if (i % 2 == 0)
                {
                    evenSum += num;
                }
                else
                {
                    oddSum += num;

                }

            }

            
            if (oddSum == evenSum)
            {
                Console.WriteLine("Yes, sum {0}", oddSum);
            }
            else
            {
                int diff = oddSum - evenSum;
                Console.WriteLine("No, diff {0}", Math.Abs(diff));
            }

        }
    }
}
