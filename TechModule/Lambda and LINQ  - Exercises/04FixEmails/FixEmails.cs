namespace _04FixEmails
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class FixEmails
    {
        public static void Main()
        {
            Dictionary<string, string> namesEmails = new Dictionary<string, string>();

            var input = Console.ReadLine();
            var counter = 0;
            var name = "";
            var email = "";

            while (input != "stop")
            {
                counter++;

                if (counter % 2 != 0)
                {
                    name = input;
                    if (!namesEmails.ContainsKey(name))
                    {
                        namesEmails[name] = "";
                    }
                }
                else if (!(input.Contains(".uk") || input.Contains(".us")))
                {
                    email = input;
                    namesEmails[name] = email;
                }
                else
                {
                    namesEmails.Remove(name);
                }

                input = Console.ReadLine();
            }

            foreach (var nameEmailPair in namesEmails)
            {
                var user = nameEmailPair.Key;
                var mail = nameEmailPair.Value;

                Console.WriteLine($"{user} -> {mail}");
            }
        }
    }
}
