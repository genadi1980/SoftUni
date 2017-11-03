using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _01Phonebook
{
    class Phonebook
    {
        static void Main(string[] args)
        {
            Dictionary<string,string> phoneBook = new Dictionary<string,string>();

            var input = Console.ReadLine();

            while (input != "END")
            {
                var inputLine = input.Split(' ');
                var commands = inputLine[0];
                var names = inputLine[1];
                

                if (commands == "A")
                {
                    var numbers = inputLine[2];
                    if (!phoneBook.ContainsKey(names))
                    {
                        phoneBook = new Dictionary<string, string>();
                    }

                    phoneBook[names] = numbers;
                }
                else if (commands == "S")
                {
                    if (phoneBook.ContainsKey(names))
                    {

                        

                         Console.WriteLine("{0} -> {1}", phoneBook.);

                        
                        
                    }
                }


                input = Console.ReadLine();
            }
                
        }
    }
}
