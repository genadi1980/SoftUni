namespace _03CriticalBreakpoint
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    using System.Numerics;
    
    public class Line
    {
        public BigInteger X1 { get; set; }

        public BigInteger Y1 { get; set; }

        public BigInteger X2 { get; set; }

        public BigInteger Y2 { get; set; }

        public BigInteger CriticalRatio { get; set; }
    }

    class CriticalBreakpoint
    {
        
        static void Main()
        {
            var input = Console.ReadLine();

            var countLines = 0L;

            List<Line> lines = new List<Line>();

           bool hasBreakpoint = true;

            while (input != "Break it.")
            {
                countLines++;

                long[] inputLine = input.Split().Select(long.Parse).ToArray();

                Line line = new Line()
                {
                    X1 = inputLine[0],
                    Y1 = inputLine[1],
                    X2 = inputLine[2],
                    Y2 = inputLine[3],
                    CriticalRatio = BigInteger.Abs((inputLine[3] + inputLine[2]) - (inputLine[1] + inputLine[0]))
            };

                lines.Add(line);         

                
                input = Console.ReadLine();
            }

            BigInteger actualRatio = 0;

            foreach (Line line in lines)
            {
                if (actualRatio == 0 && line.CriticalRatio != 0)
                {
                    actualRatio = line.CriticalRatio;
                }

                if ((line.CriticalRatio != actualRatio) && (line.CriticalRatio != 0))
                {
                    hasBreakpoint = false;
                    break;
                }
            }

            if (hasBreakpoint)
            {
                BigInteger totalRatio = BigInteger.Pow(actualRatio, lines.Count);
                BigInteger criticalBreakpoint = 0;
                BigInteger.DivRem(totalRatio, countLines, out criticalBreakpoint);


                foreach (Line line in lines)
                {
                    Console.WriteLine("Line: [{0}, {1}, {2}, {3}]", line.X1, line.Y1, line.X2, line.Y2);
                                       
                }

                Console.WriteLine("Critical Breakpoint: {0}", criticalBreakpoint);
             
            }
            else
            {
                Console.WriteLine("Critical breakpoint does not exist.");
            }
        }
    }
}
