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
            var input = Console.ReadLine();

            Regex regex = new Regex(@"^([A-Z][a-zA-Z0-9]+)\s\|\s([A-Z][a-zA-Z0-9]+)\s\|\s([A-Z][a-zA-Z0-9]+)$");

            Dictionary<string, SortedDictionary<string, SortedSet<string>>> classList = new Dictionary<string, SortedDictionary<string, SortedSet<string>>>();

            while (input != "It's testing time!")
            {
                
                MatchCollection matches = regex.Matches(input);

                foreach (Match match in matches)
                {
                    if (match.Length > 2)
                    {                        
                        var className = match.Groups[1].ToString();
                        var methodName = match.Groups[2].ToString();
                        var unitTestName = match.Groups[3].ToString();

                        if (!classList.ContainsKey(className))
                        {
                            classList[className] = new SortedDictionary<string, SortedSet<string>>();
                        }

                        if (!classList[className].ContainsKey(methodName))
                        {
                            classList[className][methodName] = new SortedSet<string>();
                        }

                        if (!classList[className][methodName].Contains(unitTestName))
                        {
                            classList[className][methodName].Add(unitTestName);
                        }
                    }
                }                         
              
                input = Console.ReadLine();

               
            }

            foreach (var units in classList.OrderBy(x => x.Key))
            {
                var unit = units.Key;
                
                Console.WriteLine($"{unit}:");

                foreach (var methodUnit in units.Value)
                {
                    Console.WriteLine($"##{methodUnit.Key}:");

                    foreach (var item in methodUnit.Value)
                    {
                        Console.WriteLine($"####{string.Join("", methodUnit.Value)}:");
                    }
                }
                   

            }
        }
    }
}
