using System;
using System.Collections.Generic;
using System.Text;
using System.Text.RegularExpressions;

namespace _03.Problem
{
    public class CubicsMessages
    {
        public static void Main(string[] args)
        {
            Regex regex = new Regex(@"^([0-9]+)([a-zA-Z]+)([^a-zA-Z]*)$");
            string inputLine = Console.ReadLine();
            while (inputLine != "Over!")
            {

                int msgLength = int.Parse(Console.ReadLine());
                if (!regex.IsMatch(inputLine))
                {
                    inputLine = Console.ReadLine();
                    continue;
                }
                Match match = regex.Match(inputLine);
                string textMsg = match.Groups[2].Value;
                if (textMsg.Length != msgLength)
                {
                    inputLine = Console.ReadLine();
                    continue;
                }
                string group1 = match.Groups[1].Value;
                string group2 = match.Groups[3].Value;
                string numbers = match.Groups[1].Value + match.Groups[3].Value;
                List<int> indexes = new List<int>();
                for (int i = 0; i < numbers.Length; i++)
                {
                    int currentIndex;
                    bool isNumber = int.TryParse(numbers[i].ToString(), out currentIndex);
                    if (isNumber)
                    {
                        indexes.Add(currentIndex);
                    }
                }
                StringBuilder result = new StringBuilder();
                foreach (int index in indexes)
                {
                    if (index < msgLength && index >= 0)
                    {
                        result.Append(textMsg[index]);
                    }
                    else
                    {
                        result.Append(" ");
                    }
                }
                Console.WriteLine("{0} == {1}", textMsg, result.ToString());

                inputLine = Console.ReadLine();
            }
        }
    }
}