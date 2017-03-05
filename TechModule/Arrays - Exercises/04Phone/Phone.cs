namespace _04Phone
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class Phone
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
                if (enterName == "call")
                {
                    if (phoneNames.Contains())
                    {

                    }
                    int enteredNameIndex = Array.IndexOf(phoneNames, enterName);
                    Console.WriteLine($"{phoneNames[enteredNameIndex]} -> {phoneNumbers[enteredNameIndex]}");
                    Console.WriteLine("calling {0}", phoneNames);
                }
            }
    }
}
