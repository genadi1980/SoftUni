using System;

namespace LeftandRightSum
{
    class LeftandRightSum
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int sum = 0;
            int sum1 = 0;
            for (int i = 0; i < n; i++)
            {
                int num = int.Parse(Console.ReadLine());
                sum = sum + num;
                
            }
            
            for (int i = 0; i < n; i++)
            {
                int num = int.Parse(Console.ReadLine());
                sum1 = sum1 + num;
                
            }
            

            if (sum == sum1)
            {
                Console.WriteLine("Yes, sum {0}", sum);
            }
            else
            {
                int diff = sum - sum1;
                Console.WriteLine("No, diff {0}", Math.Abs(diff));
            }

        }
    }
}
