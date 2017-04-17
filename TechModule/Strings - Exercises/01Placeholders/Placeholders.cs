namespace _01Placeholders
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class Placeholders
    {
        public static void Main()
        {
            string inputLine = Console.ReadLine();

            while (inputLine != "end")
            {
                string[] inputParams = inputLine.Split(new[] {'-', '>'}, StringSplitOptions.RemoveEmptyEntries);

                string sentance = inputParams[0].Trim();

                string[] elements = inputParams[1].Trim()
                    .Split(new[] { ',', ' ' }, StringSplitOptions.RemoveEmptyEntries);

                for (int i = 0; i < elements.Length; i++)
                {
                    string currentPlaceholder = "{" + i + "}";

                    sentance = sentance.Replace(currentPlaceholder, elements[i]);
                }

                Console.WriteLine(sentance);

                inputLine = Console.ReadLine();
            }
        }
    }
}
