﻿namespace _3Phonebook
{
    using System;
    using System.Linq;

    class Phonebook
    {
        static void Main()
        {
            string[] phoneNumbers = Console.ReadLine().Split(' ');
            string[] phoneNames = Console.ReadLine().Split(' ');

            while (true)
            {
                string enterName = Console.ReadLine();
                if (enterName == "done")
                {
                    break;
                }

                if (phoneNames.Contains(enterName))
                {
                    int enteredNameIndex = Array.IndexOf(phoneNames, enterName);
                    Console.WriteLine($"{phoneNames[enteredNameIndex]} -> {phoneNumbers[enteredNameIndex]}");
                }
            }
        }
    }
}