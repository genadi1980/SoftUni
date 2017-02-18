namespace _1Last3ConsecutiveEqualStrings
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class Last3ConsecutiveEqualStrings
    {
        static void Main()
        {
            string[] arrayInput = Console.ReadLine().Split(' ');

            int count = 1;
            for (int i = arrayInput.Length - 1; i > 0 ; i--)
            {
                
                if (arrayInput[i] == arrayInput[i-1])
                {
                    count++;

                    if (count == 3)
                    {
                        Console.WriteLine("{0} {0} {0}", arrayInput[i]);
                        break;
                    }
                    
                }
                else
                {
                    count = 1;
                }


            }
        }
    }
}
