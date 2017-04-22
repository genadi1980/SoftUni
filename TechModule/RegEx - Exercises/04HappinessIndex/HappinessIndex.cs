namespace _04HappinessIndex
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    using System.Text.RegularExpressions;

    public class HappinessIndex
    {
        public static void Main()
        {
            string[] happyEmotes = ":), :D, ;), :*, :], ;], :}, ;}, (:, *:, c:, [:, [;".Split(new [] {',', ' '}, StringSplitOptions.RemoveEmptyEntries);
            string[] sadEmotes = ":(, D:, ;(, :[, ;[, :{, ;{, ):, :c, ]:, ];".Split(new[] { ',', ' ' }, StringSplitOptions.RemoveEmptyEntries).ToArray();

            Regex happyPattern = new Regex(@"(\:\)|\:D|\;\)|\:\*|\:\]|\;\]|\:\}|\:\}|\;\}|\(\:|\*\:|c\:|\[\;|\[\:)");
            Regex sadPattern = new Regex(@"(\:\(|D\:|\;\(|\:\[|\;\[|\:\{|\;\{|\)\:|\:c|\]\:|\]\;)");

            string inputLine = Console.ReadLine();

            MatchCollection happyMatches = happyPattern.Matches(inputLine);
            MatchCollection sadMatches = sadPattern.Matches(inputLine);

            int happyCount = 0;
            int sadCount = 0;

            foreach (Match happyMatch in happyMatches)
            {
                if (!sadEmotes.Contains(happyMatch.Value))
                {
                    happyCount++;
                }
            }

            foreach (Match sadMatch in sadMatches)
            {
                if (!happyEmotes.Contains(sadMatch.Value))
                {
                    sadCount++;
                }
            }

            double happyIndex = happyCount / (double) sadCount;

            string status = "";

            if (happyIndex >= 2)
            {
                status = ":D";
            }
            else if (happyIndex > 1)
            {
                status = ":)"; 
            }

            else if (happyIndex == 1)
            {
                status = ":|";
            }

            else if (happyIndex < 1)
            {
                status = ":(";
            }

            Console.WriteLine("Happiness index: {0:F2} {1}", happyIndex, status );
            Console.WriteLine("[Happy count: {0}, Sad count: {1}]", happyCount, sadCount);

        }
    }
}
