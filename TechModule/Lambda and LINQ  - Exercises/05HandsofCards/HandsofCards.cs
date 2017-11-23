namespace HandsofCards
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class _HandsofCards
    {
        public static void Main()
        {
            Dictionary<string, Dictionary<int,HashSet<int>>> handsOfCard = new Dictionary<string, Dictionary<int, HashSet<int>>>();

            var input = Console.ReadLine();

            while (input != "JOKER")
            {
                var handInfo = input.Split(new char[] { ':', ',' }, StringSplitOptions.RemoveEmptyEntries);
                string name = handInfo[0];
                if (!handsOfCard.ContainsKey(name))
                {
                    handsOfCard.Add(name, new Dictionary<int, HashSet<int>>());
                    for (int i=1; i<=4; i++)
                    {
                        handsOfCard[name].Add(i, new HashSet<int>());
                    }
                }
                for (int i = 1; i < handInfo.Length; i++)
                {
                    string currentCard = handInfo[i].Trim();
                    int face = 0;
                    int suite = 0;
                    if (currentCard.Length > 2)
                    {
                        face = GetFace(currentCard.Substring(0, 2));
                        suite = GetSuite(currentCard.Substring(2));
                    }
                    else
                    {
                        face = GetFace(currentCard[0].ToString());
                        suite = GetSuite(currentCard[1].ToString());
                    }
                    if (!handsOfCard[name][suite].Contains(face))
                    {
                        handsOfCard[name][suite].Add(face);
                    }
                }

                input = Console.ReadLine();

            }
            foreach (var outerPair in handsOfCard)
            {
                int sum = 0;
                foreach (var inner in outerPair.Value)
                {
                    sum += inner.Key * inner.Value.Sum();
                }
                Console.WriteLine("{0}: {1}", outerPair.Key, sum);
            }
        }

        private static int GetSuite(string suite)
        {
            switch (suite)
            {
                case "S":
                    return 4;
                case "H":
                    return 3;
                case "D":
                    return 2;
                case "C":
                    return 1;
                default:
                    return 0;

            }
        }

        private static int GetFace(string face)
        {
            switch (face)
            {
                case "J":
                    return 11;
                case "Q":
                    return 12;
                case "K":
                    return 13;
                case "A":
                    return 14;
                default:
                    return int.Parse(face);
            }
        }
    }

}