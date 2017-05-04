namespace _02WormIpsum
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Text.RegularExpressions;
    using System.Threading.Tasks;

    public class WormIpsum
    {
        public static void Main()
        {

            List<string> wordsInSentance = new List<string>();

            Regex regex = new Regex(@"^[A-Z]\D*\.$");

            string inputLine = Console.ReadLine();

            string newWord = "";

            while (inputLine != "Worm Ipsum")
            {
                MatchCollection matches = regex.Matches(inputLine);

                foreach (Match match in matches)
                {
                    string words = match.Value;

                    wordsInSentance = words.Split().ToList();

                    for (int i = 0; i < wordsInSentance.Count; i++)
                    {
                        

                        var word = wordsInSentance[i];
                        var wordIndex = wordsInSentance.IndexOf(word);

                        for (int j = 0; j < word.Length; j++)
                        {
                            var mostReplatter = GetMaxsymbolOccurence(word);
                            var maxOccurance = GetMaximumOccurence(word);

                            if (maxOccurance > 2 && maxOccurance < word.Length )
                            {
                                word.Replace(word[j], mostReplatter);
                            }
                           
                                                        
                        }
                        wordsInSentance[wordIndex] = newWord;


                    }                    
                
                }

                inputLine = Console.ReadLine();
            }

            Console.WriteLine(string.Join(" ", wordsInSentance));
        }

        public static char GetMaxsymbolOccurence(string str)
        {
            int _maxcount = 0;
            char symbol = '0';

            foreach (char c in str)
            {
                int ix = str.IndexOf(c);
                int count = 0;
                while (ix != -1)
                {
                    StringBuilder _s = new StringBuilder();
                    _s.Append(str);
                    _s[ix] = ' ';
                    str = _s.ToString();

                    count++;

                    ix = str.IndexOf(c);
                }

                if (count > _maxcount)
                {
                    symbol = c;
                    _maxcount = count;
                }
            }

            return symbol;
        }

        public static int GetMaximumOccurence(string str)
        {
            int _maxcount = 0;

            foreach (char c in str)
            {
                int ix = str.IndexOf(c);
                int count = 0;
                while (ix != -1)
                {
                    StringBuilder _s = new StringBuilder();
                    _s.Append(str);
                    _s[ix] = ' ';
                    str = _s.ToString();

                    count++;

                    ix = str.IndexOf(c);
                }

                if (count > _maxcount)
                {
                    _maxcount = count;
                }
            }

            return _maxcount;
        }
    }
}
