namespace _3Phonebook
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

            for (int i = 0; i < phoneNumbers.Length && i < phoneNames.Length; i++)
            {
                string enterName = Console.ReadLine();
                if (enterName == phoneNames[i])
                {
                    Console.WriteLine("{0} -> {1}", phoneNames[i], phoneNumbers[i]);
                }
                else if (enterName == "done")
                {
                    break;
                }
            }
        }
    }
}
