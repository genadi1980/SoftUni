namespace _05UserLogins
{
    using System;
    using System.Collections.Generic;
    using System.Linq;

    class UserLogins
    {
        static void Main()
        {
            var userLogins = new Dictionary<string, string>();
            var unsuccessfulLogins = 0;
            var line = Console.ReadLine();
                

            while (line != "login")
            {
                var tokens = line.Split(" ->".ToCharArray(), StringSplitOptions.RemoveEmptyEntries);
                var userName = tokens[0];
                var userPass = tokens[1];

                if (!userLogins.ContainsKey(userName))
                {
                    userLogins[userName] = userPass;
                }
                userLogins[userName] = userPass;

                line = Console.ReadLine();
            }

            line = Console.ReadLine();

            while(line != "end")
            {
                var tokens = line.Split(" ->".ToCharArray(), StringSplitOptions.RemoveEmptyEntries);
                var userName = tokens[0];
                var userPass = tokens[1];

                if (!userLogins.ContainsKey(userName))
                {
                    unsuccessfulLogins++;
                    Console.WriteLine($"{userName}: login failed");
                    
                }
                else if (userPass == userLogins[userName])
                {
                    Console.WriteLine($"{userName}: logged in successfully");
                }

                else
                {
                    Console.WriteLine($"{userName}: login failed");
                    unsuccessfulLogins++;
                }
                    line = Console.ReadLine();
            }

           
            Console.WriteLine($"unsuccessful login attempts: {unsuccessfulLogins}");
        }
    }
}
