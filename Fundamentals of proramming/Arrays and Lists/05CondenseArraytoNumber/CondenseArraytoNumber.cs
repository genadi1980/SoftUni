using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _05CondenseArraytoNumber
{
    class CondenseArraytoNumber
    {
        static void Main()
        {
            var nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

            while (nums.Length > 1)
            {
                var condensed = new int[nums.Length - 1];

                for (int i = 0; i < nums.Length - 1; i++)
                {
                    condensed[i] = nums[i] + nums[i + 1];
                }

                nums = condensed;
            }
            Console.WriteLine(nums[0]);
        }
    }
}
