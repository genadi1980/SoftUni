namespace _02DefaultValues
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
   


    class DefaultValues
    {
        static void Main()
        {
            Dictionary<string, string> dictionary = new Dictionary<string, string>();

            string inputLine = Console.ReadLine();

            while (inputLine != "end")
            {
                string[] inputParams = inputLine.Split(new[] { ' ', '-', '>' }, StringSplitOptions.RemoveEmptyEntries);

                string Key = inputParams[0];
                string Value = inputParams[1];

                dictionary[Key] = Value; 
                inputLine = Console.ReadLine();
            }

            string defaultValue = Console.ReadLine();

            Dictionary<string, string> unchangedValues = dictionary
                .Where(x => x.Value != "null")
                .OrderByDescending(x => x.Value.Length)
                .ToDictionary(x => x.Key, x => x.Value);

            Dictionary<string, string> changedValues = dictionary
                .Where(x => x.Value == "null")
                .ToDictionary(x => x.Key, x => defaultValue);

            foreach (var entry in unchangedValues)
            {
                Console.WriteLine("{0} <-> {1}", entry.Key, entry.Value);
            }
            foreach (var entry in changedValues)
            {
                Console.WriteLine("{0} <-> {1}", entry.Key, entry.Value);
            }
        }
    }
}
