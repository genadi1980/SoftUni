namespace _03UserDatabase
{
    using System;
    using System.Collections.Generic;
    using System.IO;

    public class UserDatabase
    {
        private static string dbPath = "users.txt";
        private static Dictionary<string, string> users = 
            new Dictionary<string, string>();
        private static string loggedInUser = null;

        public static void Main()
        {
            
            if (!File.Exists(dbPath))
            {
                File.Create(dbPath).Close();
            }

            var dbLines = File.ReadAllLines(dbPath);

            foreach (var line in dbLines)
            {
                var lineParts = line.Split(' ');
                var username = lineParts[0];
                var password = lineParts[1];

                users[username] = password;
            }             
                
            var commands = File.ReadAllLines("input.txt");

            foreach (var command in commands)
            {
                var commandParts = command.Split(' ');

                switch (commandParts[0])
                {
                    case "register":

                        var username = commandParts[1];
                        var password = commandParts[2];
                        var confirmPassword = commandParts[3];


                        Register(username, password, confirmPassword);

                        break;

                    case "login":
                        username = commandParts[1];
                        password = commandParts[2];

                        Login(username, password);
                        break;

                    case "logout":
                        Logout();
                        break;

                }
            }
        }

        private static void Logout()
        {

            if (loggedInUser == null)
            {
                Console.WriteLine("There is no currently logged in user.");
                return;
            }

            loggedInUser = null;
        }

        private static void Login(string username, string password)
        {
            if (loggedInUser != null)
            {
                Console.WriteLine("There is already a logged in user.");
                return;
            }

            if (!users.ContainsKey(username))
            {
                Console.WriteLine("There is no user with the given username.");
                return;
            }

            if (users[username] != password)
            {
                Console.WriteLine("The password you entered is incorrect.");
                return;
            }

            loggedInUser = username;
        }

        private static void Register(string username, string password, string confirmPassword)
        {
            if (users.ContainsKey(username))
            {
                Console.WriteLine("The given username already exists.");
                return;
            }
            if (password != confirmPassword)
            {
                Console.WriteLine("The two passwords must match.");
                return;
            }
             
            users[username] = password;
            File.AppendAllLines(dbPath, new[] { $"{username} {password}" });
        }
    }
}
