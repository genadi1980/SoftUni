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
                var inputLine = input.Trim().Split(' ');
                var commands = inputLine[0];
                
                

                if (commands == "A")
                {
                    var names = inputLine[1];
                    var numbers = inputLine[2];
                    if (!phoneBook.ContainsKey(names))
                    {
                        phoneBook[names] = null;
                    }

                    phoneBook[names] = numbers;
                }
                else if (commands == "S")
                {
                    var names = inputLine[1];
                    if (phoneBook.ContainsKey(names))
                    {
                        Console.WriteLine("{0} -> {1}", names, phoneBook[names]);
                                             
                    }
                    else
                    {
                        Console.WriteLine("Contact {0} does not exist.", names);
                    }
                }

                else if (commands == "ListAll")
                {
                    var sortedNames = phoneBook.OrderBy(key => key.Key);
                   
                    foreach (var name in sortedNames)
                    {
                        Console.WriteLine("{0} -> {1}", name.Key, name.Value);
                    }
                }
                input = Console.ReadLine();
            }
                
        }
    }
}
