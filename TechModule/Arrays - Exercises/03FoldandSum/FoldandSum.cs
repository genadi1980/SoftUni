using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _03FoldandSum
{
    class FoldandSum
    {
        static void Main(string[] args)
        {
            var nums = Console.ReadLine().Split().Select(int.Parse).ToArray();


            int[] firstNumbers = new int[nums.Length / 4];
            int[] lastNumbers = new int[nums.Length / 4];
            int[] middleNumbers = new int[nums.Length / 2];

            for (int i = 0; i < firstNumbers.Length; i++)
            {
                firstNumbers[i] = nums[i];
            }

            int index = 0;
            for (int i = nums.Length - nums.Length / 4; i < nums.Length; i++)
            {
                lastNumbers[index] = nums[i];
                index++;
            }

            index = 0;
            for (int i = nums.Length / 4; i < nums.Length - nums.Length / 4; i++)
            {
                middleNumbers[index] = nums[i];
                index++;
            }

            firstNumbers = firstNumbers.Reverse().ToArray();
            lastNumbers = lastNumbers.Reverse().ToArray();

            int[] firstAndLastNums = new int[nums.Length / 2];
            index = 0;
            for (int i = 0; i < firstNumbers.Length; i++)
            {
                firstAndLastNums[index] = lastNumbers[i];
                index++;
            }

            for (int i=0;i < lastNumbers.Length; i++)
            {
                firstAndLastNums[index] = lastNumbers[i];
                index++;
            }

            for (int i = 0; i < firstAndLastNums.Length; i++)
            {
                firstAndLastNums[i] += middleNumbers[i];
            }

            Console.WriteLine(string.Join(" ", firstAndLastNums));
        }
    }
}
