namespace _01RegisteredUsers
{
    using System;
    using System.Collections.Generic;
    using System.Globalization;
    using System.Linq;

    class RegisteredUsers
    {
        static void Main()
        {
            Dictionary<string, DateTime> registeredUsernames = new Dictionary<string, DateTime>();

            string inputLine = Console.ReadLine();

            while ( inputLine != "end")
            {
                string[] inputParams = inputLine.Split(" ->".ToCharArray(), StringSplitOptions.RemoveEmptyEntries);

                string userName = inputParams[0];

                DateTime registryDate = DateTime.ParseExact(inputParams[1], "dd/MM/yyyy", CultureInfo.InvariantCulture);

                registeredUsernames[userName] = registryDate;

                inputLine = Console.ReadLine();
            }

            Dictionary<string, DateTime> orderedUsernames =
                registeredUsernames.Reverse()
                .OrderBy(x => x.Value)
                .Take(5)
                .OrderByDescending(x => x.Value)
                .ToDictionary(x => x.Key, x => x.Value);

            foreach (var orderedUsernme in orderedUsernames)
            {
                Console.WriteLine("{0}", orderedUsernames.Keys);
            }
        }
    }
}
