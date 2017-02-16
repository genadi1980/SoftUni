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

            var numbers = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

            int[] firstNumbers = new int[numbers.Length / 4];
            int[] lastNumbers = new int[numbers.Length / 4];
            int[] middleNumbers = new int[numbers.Length / 2];

            for (int i = 0; i < numbers.Length /4 ; i++)
            {
                firstNumbers[i] = numbers[i];
            }

            for (int j = 0; j < numbers.Length / 4; j++)
            {
                
                lastNumbers[j] = numbers[numbers.Length - numbers.Length / 4 + j];
                
            }

        }
    }
}
