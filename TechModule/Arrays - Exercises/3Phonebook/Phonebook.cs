﻿namespace _3Phonebook
{
    using System;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class Phonebook
    {
        static void Main()
        {
            string[] phoneNumbers = Console.ReadLine().Split(' ');
            string[] phoneNames = Console.ReadLine().Split(' ');
            string[] searchedNames = new string[phoneNames.Length];
            string enterName = string.Empty;
            string total = string.Empty;



            for (int i = 0; i < phoneNumbers.Length && i < phoneNames.Length; i++)
            {

                enterName = Console.ReadLine();
                if (enterName != "done")
                {
                    for (int row = 0; row < phoneNames.Length; row++)
                        {
                            if (enterName == phoneNames[row])
                            {
                                total = $"{phoneNames[row]} -> {phoneNumbers[row]}";
                                Console.WriteLine(total);
                            }
                        }
                    
                }
                else break;
            }



        }

    }
                                                               
}
