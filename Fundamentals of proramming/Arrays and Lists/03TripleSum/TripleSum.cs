using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _03TripleSum
{
    class TripleSum
    {
        static void Main(string[] args)
        {
            int[] arr = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

            var counter = 0;

            for (int i = 0; i < arr.Length; i++)
            {
                for (int j = i+1; j < arr.Length; j++)
                {
                    for (int c = 0; c < arr.Length; c++)
                    {
                        var result = arr[i] + arr[j];

                        if (arr.Contains(result))
                        {
                            Console.WriteLine("{0} + {1} == {2}", arr[i], arr[j], result);
                            counter++;
                            break;
                        }
                        
                    }
                   
                }
            }
            if (counter == 0)
            {
                Console.WriteLine("No");
            }
        }
    }
}
