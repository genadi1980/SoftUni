namespace _02DictRef
{
    using System;
    using System.Collections.Generic;
    using System.Linq;

    class DictRef
    {
        static void Main()
        {
            var refDictionary = new Dictionary<string, int>();

            var line = Console.ReadLine();

            while (line != "end")
            {
                var tokens = line.Split();
                var firstelement = tokens[0];
                var lastelement = tokens[tokens.Length - 1];

                var number = 0;

                if (int.TryParse(lastelement, out number))
                {
                    refDictionary[firstelement] = number;
                }
                else
                {
                    if (refDictionary.ContainsKey(lastelement))
                    {
                        var referencedValue = refDictionary[lastelement];
                        refDictionary[firstelement] = referencedValue;
                    }
                    
                }
                         
                              
                line = Console.ReadLine();
            }

            foreach (var itemPricePair in refDictionary)
            {
                var item = itemPricePair.Key;
                var price = itemPricePair.Value;
                Console.WriteLine($"{item} === {price}");
            }

        }
    }
}
