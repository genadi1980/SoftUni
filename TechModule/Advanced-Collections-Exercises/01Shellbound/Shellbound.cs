namespace _01Shellbound
{
    using System;
    using System.Collections.Generic;
    using System.Linq;

    class Shellbound
    {
        static void Main()
        {
            var dictionary = new Dictionary<string, List<int>>();
            var inputLine = Console.ReadLine();

            while (inputLine != "Aggregate")
            {
                var inputParam = inputLine.Split(' ');
                var location = inputParam[0];
                var shells = int.Parse(inputParam[1]);

                if (!dictionary.ContainsKey(location))
                {
                    dictionary[location] = new List<int>();
                    dictionary[location].Add(shells);
                }

                for (int i = 0; i < inputParam.Length - 1; i++)
                {
                    dictionary[location].Add(shells);
                }
                

                inputLine = Console.ReadLine();
            }

            foreach (var shells in dictionary)
            {
                var location = shells.Key;
                var shell = string.Join(", ", shells.Value);
                var avarage = 

                Console.WriteLine("{0} -> {1} ({2})", location, shell);
            }
        }
    }
}
