using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _05Rocket
{
    class Rocket
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int spaces = 0;
            int points = n * 2 ;

            for (int currentRow = 0; currentRow < n; currentRow++)
            {
                Console.WriteLine(@"{0}/{1}\{0}", new string('.', (3 * n - 2)/2 - currentRow), new string(' ', spaces + 2 * currentRow));                
            }
            Console.WriteLine("{0}{1}{0}", new string('.', n / 2 ), new string('*', 2 * n));

            for (int currentRow = 0; currentRow < 2 * n; currentRow++)
            {
                Console.WriteLine(@"{0}|{1}|{0}", new string('.', n / 2), new string('\\', 2*n - 2));
            }
            for (int currentRow = 0; currentRow < n / 2 ; currentRow++)
            {
                int stars = 2 * n - 2;
                Console.WriteLine(@"{0}/{1}\{0}", new string('.', n / 2 - currentRow), new string('*', stars + 2 * currentRow));
               
            }
        }
    }
}
