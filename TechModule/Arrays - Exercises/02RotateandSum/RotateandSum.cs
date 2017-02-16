using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _02RotateandSum
{
    class RotateandSum
    {
        static void Main(string[] args)
        {
            string[] inputNumbers = Console.ReadLine().Split(' ');
            int[] parsedNumbers = new int[inputNumbers.Length];
            for (int i = 0; i < inputNumbers.Length; i++)
            {
                parsedNumbers[i] = int.Parse(inputNumbers[i]); 
            }

            int n = int.Parse(Console.ReadLine());

            int[] sum = new int[parsedNumbers.Length];

            for (int i = 0; i < n % parsedNumbers.Length; i++)
            {
                int lastNumber = parsedNumbers[parsedNumbers.Length - 1];

                for (int j = parsedNumbers.Length - 1; j > 0; j--)
                {
                    parsedNumbers[j] = parsedNumbers[j - 1];
                }
                parsedNumbers[0] = lastNumber;

                for (int j = 0; j < parsedNumbers.Length; j++)
                {
                    sum[j] += parsedNumbers[j];
                }

                
            }
            Console.WriteLine(string.Join(" ", sum));
        }
    }
}
