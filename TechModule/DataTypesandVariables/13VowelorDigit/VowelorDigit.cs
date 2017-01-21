using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _13VowelorDigit
{
    class VowelorDigit
    {
        static void Main(string[] args)
        {
            
            char ch = char.Parse(Console.ReadLine());
           
            if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
            {
                Console.WriteLine("vowel");
            }
            else if (ch >= '0' && ch <= '9')
            {
                Console.WriteLine("digit");
            }
            else Console.WriteLine("other");
                        
        }

      }
}

