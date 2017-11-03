namespace _04Histogram
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class Histogram
    {
        public static void Main()
        {
            var n = int.Parse(Console.ReadLine());
            var p1 = 0D;
            var p2 = 0D;
            var p3 = 0D;
            var p4 = 0D;
            var p5 = 0D;

            var countp1 = 0;
            var countp2 = 0;
            var countp3 = 0;
            var countp4 = 0;
            var countp5 = 0;

            for (int i = 0; i < n; i++)
            {
                var number = int.Parse(Console.ReadLine());

                if (number < 200)
                {
                    countp1++;                    
                }
                else if (number >= 200 && number < 400)
                {
                    countp2++;
                }
                else if (number >= 400 && number < 600)
                {
                    countp3++;
                }
                else if (number >= 600 && number < 800)
                {
                    countp4++;
                }
                else if (number >= 800)
                {
                    countp5++;
                }
            }

            p1 = PercentCalc(n, countp1);
            p2 = PercentCalc(n, countp2);
            p3 = PercentCalc(n, countp3);
            p4 = PercentCalc(n, countp4);
            p5 = PercentCalc(n, countp5);

            Console.WriteLine("{0:f2}%", p1);
            Console.WriteLine("{0:f2}%", p2);
            Console.WriteLine("{0:f2}%", p3);
            Console.WriteLine("{0:f2}%", p4);
            Console.WriteLine("{0:f2}%", p5);
        }

        private static double PercentCalc(int n, int count)
        {
            double result = count / (double) n * 100;

            return result;
        }
    }
}
