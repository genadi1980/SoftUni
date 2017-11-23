using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _003Dictionary
{
    class Program
    {
        static void Main(string[] args)
        {
            Dictionary<string, string> words = new Dictionary<string, string>();

            words.Add("Nakov", "0888080808");
            words.Add("Misho", "+359883123");
            words.Add("Gero", "5559393");

            var names = words.Keys;
            var numbers = words.Values;

                Console.WriteLine($"{names} -> {numbers}");
            
            
        }
    }
}
