namespace _03RageQuit
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Text.RegularExpressions;
    using System.Threading.Tasks;

    public class RageQuit
    {
        public static void Main()
        {
            string inputLine = Console.ReadLine();

            Regex regex = new Regex(@"(\D+)(\d+)");            

            MatchCollection matches = regex.Matches(inputLine);

            StringBuilder result = new StringBuilder();

            foreach (Match match in matches)
            {
                string partition = match.Groups[1].Value;
                int times = int.Parse(match.Groups[2].Value);

                result.Append(Repeat(partition, times).ToUpper());                
            }


            int count = result.ToString().Distinct().Count();

            Console.WriteLine("Unique symbols used: {0}", count);
            Console.WriteLine(result.ToString());

        }

        private static string Repeat(string partition, int times)
        {
            StringBuilder final = new StringBuilder();
            for (int i = 0; i < times; i++)
            {
                final.Append(partition);
            }

            return final.ToString();
        }
    }
}
