using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _04SumArrays
{
    class SumArrays
    {
        static void Main(string[] args)
        {
            int[] arr1 = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int[] arr2 = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            
            var maxLength = Math.Max(arr1.Length, arr2.Length);

            int[] result = new int[maxLength];

            for (int i = 0; i < maxLength; i++)
            {
                result[i] = arr1[i % arr1.Length] + arr2[i % arr2.Length];
                
            }

            Console.WriteLine(string.Join(" ", result));
        }
    }
}
