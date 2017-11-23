namespace _06UserLogs
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class UserLogs
    {
        public static void Main()
        {
            SortedDictionary<string, Dictionary<string, int>> usersnameIPs = 
                new SortedDictionary<string, Dictionary<string, int>>();

           var input = Console.ReadLine().Trim();

            while (!input.Equals("end"))
            {
                var inputEntries = input.Split(new char[] {'=',' ' }, StringSplitOptions.RemoveEmptyEntries);
                               
                var userIP = inputEntries[1];                
                var userName = inputEntries[5];
                var count = 1;

                if (!usersnameIPs.ContainsKey(userName))
                {
                    usersnameIPs.Add(userName, new Dictionary<string, int>());
                }
                if (!usersnameIPs[userName].ContainsKey(userIP))
                {
                    usersnameIPs[userName].Add(userIP, count);
                }
                else usersnameIPs[userName][userIP]++;
                input = Console.ReadLine();                
            }

            foreach (var user in usersnameIPs)
            {
                Console.WriteLine($"{user.Key}:");

                foreach (var log in user.Value)
                {
                    var thing = log.Key;
                    if (log.Key != user.Value.Keys.Last())
                    {
                        Console.Write($"{log.Key} => {log.Value}, ");
                    }
                    else Console.WriteLine($"{log.Key} => {log.Value}.");
                }
            }
        }
    }
}
