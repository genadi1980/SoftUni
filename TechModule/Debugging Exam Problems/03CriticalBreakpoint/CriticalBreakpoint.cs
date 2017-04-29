namespace _03CriticalBreakpoint
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class CriticalBreakpoint
    {
        
        static void Main()
        {
            var input = Console.ReadLine();

            var countLines = 0L;

            List<long> list = new List<long>();

            var sb = new StringBuilder();

            bool isCritical = false;

            while (input != "Break it.")
            {
                countLines++;

                string[] line = input.Split(' ');

                long x1 = long.Parse(line[0]);
                long y1 = long.Parse(line[1]);
                long x2 = long.Parse(line[2]);
                long y2 = long.Parse(line[3]);

                sb.Append("Line: [" + x1 + ", " + y1 + ", " + x2 + ", " + y2 + "]" + "\n");

                long result = 0;
                result = Math.Abs((y2 + x2) - (y1 + x1));
                list.Add(result);

                input = Console.ReadLine();
            }

            List<long> list2 = list.Distinct().ToList();

            if (list2.Count > 2)
            {
                isCritical = false;
                Console.WriteLine("Critical breakpoint does not exist.");
            }
            else if (list2.Count == 2)
            {
                if (list2.Take(0) != list2.Take(1) && list2.Take(0) == 0 || list2.Take(1) == 0)
                {

                }
            }

            
        }
    }
}
