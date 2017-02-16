using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _04SieveofEratosthenes
{
    class SieveofEratosthenes
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            Fast(n);


        }

       private static void Fast(int n)
        {
            bool[] primes = new bool[n + 1];

            for (int i = 0; i <= n; i++)
            {
                primes[i] = true;
            }
            primes[0] = primes[1] = false;

            for (int p = 2; p <= n; p++)
            {
                if (primes[p] == true)
                {
                    Console.WriteLine(p);
                    for (int j = 0; j <= n; j++)
                    {
                        if (j*p <= n && j*p >= 0)
                        {
                            primes[j * p] = false;
                        }                        
                    }
                }
            }
        }
     }
}
