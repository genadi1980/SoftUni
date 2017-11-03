namespace _05DrawFort
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class DrawFort
    {
        static void Main()
        {
            var n = int.Parse(Console.ReadLine());

            if (n<5)
            {
                Console.WriteLine("/" + "{0}" + "\\" + "/" + "{0}" + "\\", new string('^', n / 2));
                for (int i = 0; i < n-2; i++)
                {
                    Console.WriteLine("|" + "{0}" + "{0}" + "|", new string(' ', n - 1));
                }
                
                Console.WriteLine("\\" + "{0}" + "/" + "\\" + "{0}" + "/", new string('_', n / 2));
            }
            else
            {
                Console.WriteLine("/" + "{0}" + "\\" + "{1}" + "/" + "{0}" + "\\", new string('^', n / 2), new string('_', n / 2));
                        

                    for (int row = 0; row < n-3; row++)
                    {
                        Console.Write("|");
                    if (n%2 != 0)
                    {
                        Console.Write("{0}", new string(' ', (1 + (3 * n / 2))));
                    }
                    else
                    {
                        Console.Write("{0}", new string(' ', (2 + (3 * n / 2))));
                    }
                        Console.Write("|");
                        Console.WriteLine();
                    }
           
                Console.WriteLine("|" + "{0}" + "{1}" + "{0}" + "|", new string(' ', (n / 2) + 1), new string('_', n / 2));
                Console.WriteLine("\\" + "{0}" + "/" + "{1}" + "\\" + "{0}" + "/", new string('_', n / 2), new string(' ', n / 2));

            }
        }
    }
}
