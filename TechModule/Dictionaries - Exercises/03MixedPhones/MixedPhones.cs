namespace _03MixedPhones
{
    using System;
    using System.Collections.Generic;
    using System.Linq;

    class MixedPhones
    {
        static void Main()
        {
            var line = Console.ReadLine();

            var namesPhones = new SortedDictionary<string, long>();

            while (line != "Over")
            {
                var tokens = line.Split(" :".ToCharArray(), StringSplitOptions.RemoveEmptyEntries);

                var firstElement = tokens[0];
                var secondElement = tokens[1];

                var phoneNumber = 0l;

                if (long.TryParse(firstElement, out phoneNumber))
                {
                    namesPhones[secondElement] = phoneNumber;
                }
                else if (long.TryParse(secondElement, out phoneNumber))
                {
                    namesPhones[firstElement] = phoneNumber;
                }

                line = Console.ReadLine();
                
            }

            foreach (var phoneNamePair in namesPhones)
            {
                var name = phoneNamePair.Key;
                var phone = phoneNamePair.Value;

                Console.WriteLine($"{name} -> {phone}");
            }
        }
    }
}

