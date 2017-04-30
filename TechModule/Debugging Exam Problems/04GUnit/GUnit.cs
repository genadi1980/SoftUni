namespace _04GUnit
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Text.RegularExpressions;
    using System.Threading.Tasks;

    public class GUnit
    {
        public static void Main()
        {
            Regex validationRegex = new Regex(@"^([A-Z][a-zA-Z0-9]+)\s\|\s([A-Z][a-zA-Z0-9]+)\s\|\s([A-Z][a-zA-Z0-9]+)$");
                                  
            Dictionary<string, Dictionary<string, List<string>>> classes = new Dictionary<string, Dictionary<string, List<string>>>();

            var input = Console.ReadLine();

            while (input != "It's testing time!")
            {
                
                MatchCollection matches = validationRegex.Matches(input);

                foreach (Match match in matches)
                {
                    if (validationRegex.IsMatch(input));
                    {                        
                        var className = match.Groups[1].Value;
                        var methodName = match.Groups[2].Value;
                        var unitTestName = match.Groups[3].Value;

                        if (!classes.ContainsKey(className))
                        {
                            classes[className] = new Dictionary<string, List<string>>();
                        }

                        if (!classes[className].ContainsKey(methodName))
                        {
                            classes[className][methodName] = new List<string>();
                        }

                        if (!classes[className][methodName].Contains(unitTestName))
                        {
                            classes[className][methodName].Add(unitTestName);
                        }
                    }
                }                         
              
                input = Console.ReadLine();

               
            }

            Dictionary<string, Dictionary<string, List<string>>> sortedClasess =
                classes.OrderByDescending(x => x.Value.Values
                .Sum(y => y.Count))
                .ThenBy(x => x.Value.Count)
                .ThenBy(x => x.Key, StringComparer.Ordinal)
                .ToDictionary(x => x.Key, x => x.Value);
            


            foreach (var classEntry in sortedClasess)
            {
                               
                Console.WriteLine($"{classEntry.Key}:");

                Dictionary<string, List<string>> sortedMethods =
                     classEntry.Value.OrderByDescending(m => m.Value.Count)
                     .ThenBy(m => m.Key, StringComparer.Ordinal)
                     .ToDictionary(m => m.Key, m => m.Value);

                foreach (var methodEntry in sortedMethods)
                {
                    Console.WriteLine($"##{methodEntry.Key}:");

                    List<string> sortedUnitTests =
                        methodEntry.Value.OrderBy(u => u.Length)
                        .ThenBy(u => u, StringComparer.Ordinal).ToList();

                    foreach (var unitTestEntry in sortedUnitTests)
                    {
                        Console.WriteLine($"####{unitTestEntry}");
                    }
                }
                               
            }
        }
    }
}
