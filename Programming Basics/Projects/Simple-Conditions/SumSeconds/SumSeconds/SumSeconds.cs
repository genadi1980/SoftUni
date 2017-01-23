using System;


namespace SumSeconds
{
    class SumSeconds
    {
        static void Main(string[] args)
        {
            int firstCompetitor = int.Parse(Console.ReadLine());
            int secondCompetitor = int.Parse(Console.ReadLine());
            int thirdCompetitor = int.Parse(Console.ReadLine());

                        int result = firstCompetitor + secondCompetitor + thirdCompetitor;
                        int min = result / 60;
                        int sec = result % 60;
                        Console.WriteLine("{0}:{1:00}",min,sec );


            }
        }
    }

