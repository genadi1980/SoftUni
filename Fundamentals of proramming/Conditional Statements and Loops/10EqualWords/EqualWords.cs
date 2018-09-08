using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _10EqualWords
{
    public class EqualWords
    {
        public static void Main()
        {
            string word1 = Console.ReadLine().ToLower();
            string word2 = Console.ReadLine().ToLower();

            if (word1.Equals(word2))
            {
                Console.WriteLine("yes");
            }
            else
            {
                Console.WriteLine("no");
            }
        }
    }
}
