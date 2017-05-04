namespace _04WormsWorldParty
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Text.RegularExpressions;
    using System.Threading.Tasks;

    public class WormsWorldParty
    {
        public static void Main()
        {
            Dictionary<string, Dictionary<string, int>> wormDB =
                new Dictionary<string, Dictionary<string, int>>();

            Regex validationRegex = new Regex(@"^(\D+)\s\-\>\s(\D+)\-\>\s(\d+)$");

            var input = Console.ReadLine();

            while (input != "quit")
            {
                MatchCollection matches = validationRegex.Matches(input);

                foreach (Match match in matches)
                {

                    if (validationRegex.IsMatch(input))
                    {
                        var wormName = match.Groups[1].Value;
                        var teamName = match.Groups[2].Value;
                        var wormScore = int.Parse(match.Groups[3].Value);

                        if (!wormDB.ContainsKey(wormName))
                        {
                            wormDB[teamName] = new Dictionary<string, List<int>>();
                        }

                        if (!wormDB[teamName].ContainsKey(wormName))
                        {
                            wormDB[teamName][wormName] = new List<int>();
                        }

                        if (!wormDB[teamName][wormName].Contains(wormScore))
                        {
                            wormDB[teamName][wormName].Add(wormScore);
                        }
                    }
                }


                input = Console.ReadLine();
            }

            Dictionary<string, Dictionary<string, List<int>>> sortedTeams =
                wormDB
                .OrderByDescending(x => x.Value.Values
                 .Sum())                 
                 .ToDictionary(x => x.Key, x => x.Value);

            foreach (var teamNameEntry in sortedTeams)
                {                                        
                    Console.WriteLine("Team: {0} - {1}", teamNameEntry.Key, sortedTeams.Values.Sum( s => s.Value));

                Dictionary<string, List<int>> sortedWorms =
                     teamNameEntry.Value.OrderByDescending(m => m.Value.Count)
                     .ThenBy(m => m.Key, StringComparer.Ordinal)
                     .ToDictionary(m => m.Key, m => m.Value);

                foreach (var wormNameEntry in sortedWorms)
                {
                    
                    Console.WriteLine("###{0} : {1}", wormNameEntry.Key, string.Join("\n", wormNameEntry.Value));
                }
                
            }

            }
        }
    }

