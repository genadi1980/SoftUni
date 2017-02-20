namespace _3PhonebookMyCode
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class PhonebookMyCode
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
                    if (phoneNames.Contains(enterName))
                    {
                        int enteredNameIndex = Array.IndexOf(phoneNames, enterName);
                        searchedNames[i] = $"{phoneNames[enteredNameIndex]} -> {phoneNumbers[enteredNameIndex]}";
                        Console.WriteLine(searchedNames[i]);
                    }

                }
                else break;
            }
        }
    }
}
