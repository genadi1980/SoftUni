using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _03.FootballLeague
{
    class FootballLeague
    {
        static void Main(string[] args)
        {
            string key = Console.ReadLine();
            string command = Console.ReadLine();
            SortedDictionary<string, int> classification = new SortedDictionary<string, int>();
            SortedDictionary<string, int> scorers = new SortedDictionary<string, int>();

            while (command.ToUpper() != "FINAL")
            {
                int homeTeamScore;
                int awayTeamScore;
                int homeTeamPoints;
                int awayTeamPoints;
                DefiningResultAndTeamsPoints(command, out homeTeamScore, out awayTeamScore, out homeTeamPoints, out awayTeamPoints);

                string reversedHomeTeam = string.Empty;
                string reversedAwayTeam = string.Empty;
                int startIndex = 0;
                int endIndex = 0;

                string homeTeam = HomeTeamName(key, command, ref reversedHomeTeam, ref startIndex, ref endIndex);

                string awayTeam = AwayTeamName(key, command, ref reversedAwayTeam, ref startIndex, ref endIndex);

                AddingPointsToTeams(classification, homeTeamPoints, awayTeamPoints, homeTeam, awayTeam);

                AddingGoalsToTeams(scorers, homeTeamScore, awayTeamScore, homeTeam, awayTeam);

                command = Console.ReadLine();
            }

            PrintingClassificationAndScorers(classification, scorers);

        }

        private static void PrintingClassificationAndScorers(SortedDictionary<string, int> classification, SortedDictionary<string, int> scorers)
        {
            int counter = 1;
            Console.WriteLine("League standings:");
            foreach (KeyValuePair<string, int> team in classification.OrderByDescending(team => team.Value))
            {
                Console.WriteLine("{0}. {1} {2}", counter, team.Key, team.Value);
                counter++;
            }

            counter = 1;
            Console.WriteLine("Top 3 scored goals:");
            foreach (KeyValuePair<string, int> country in scorers.OrderByDescending(country => country.Value).Take(3))
            {
                Console.WriteLine("- {0} -> {1}", country.Key, country.Value);
            }
        }

        private static void DefiningResultAndTeamsPoints(string command, out int homeTeamScore, out int awayTeamScore, out int homeTeamPoints, out int awayTeamPoints)
        {
            string resultReversed = string.Empty;
            for (int i = command.Length - 1; i > command.Length - 4; i--)
            {
                resultReversed += command[i];
            }
            homeTeamScore = int.Parse(resultReversed[2].ToString());
            awayTeamScore = int.Parse(resultReversed[0].ToString());
            homeTeamPoints = 1;
            awayTeamPoints = 1;

            if (homeTeamScore > awayTeamScore)
            {
                homeTeamPoints = 3;
                awayTeamPoints = 0;
            }
            else if (homeTeamScore < awayTeamScore)
            {
                homeTeamPoints = 0;
                awayTeamPoints = 3;
            }
        }

        private static void AddingGoalsToTeams(SortedDictionary<string, int> scorers, int homeTeamScore, int awayTeamScore, string homeTeam, string awayTeam)
        {
            if (scorers.ContainsKey(homeTeam))
                scorers[homeTeam] += homeTeamScore;
            else
                scorers[homeTeam] = homeTeamScore;

            if (scorers.ContainsKey(awayTeam))
                scorers[awayTeam] += awayTeamScore;
            else
                scorers[awayTeam] = awayTeamScore;
        }

        private static void AddingPointsToTeams(SortedDictionary<string, int> classification, int homeTeamPoints, int awayTeamPoints, string homeTeam, string awayTeam)
        {
            if (classification.ContainsKey(homeTeam))
                classification[homeTeam] += homeTeamPoints;
            else
                classification[homeTeam] = homeTeamPoints;

            if (classification.ContainsKey(awayTeam))
                classification[awayTeam] += awayTeamPoints;
            else
                classification[awayTeam] = awayTeamPoints;
        }

        private static string AwayTeamName(string key, string command, ref string reversedAwayTeam, ref int startIndex, ref int endIndex)
        {
            startIndex = command.IndexOf(key, endIndex + 1) + key.Length;
            endIndex = command.IndexOf(key, startIndex);
            for (int i = startIndex; i < endIndex; i++)
            {
                reversedAwayTeam += command[i];
            }

            char[] awayTeamChars = reversedAwayTeam.ToCharArray();
            Array.Reverse(awayTeamChars);
            string awayTeam = new string(awayTeamChars);
            awayTeam = awayTeam.ToUpper();
            return awayTeam;
        }

        private static string HomeTeamName(string key, string command, ref string reversedHomeTeam, ref int startIndex, ref int endIndex)
        {
            startIndex = command.IndexOf(key) + key.Length;
            endIndex = command.IndexOf(key, startIndex);
            for (int i = startIndex; i < endIndex; i++)
            {
                reversedHomeTeam += command[i];
            }

            char[] homeTeamChars = reversedHomeTeam.ToCharArray();
            Array.Reverse(homeTeamChars);
            string homeTeam = new string(homeTeamChars);
            homeTeam = homeTeam.ToUpper();
            return homeTeam;
        }
    }
}