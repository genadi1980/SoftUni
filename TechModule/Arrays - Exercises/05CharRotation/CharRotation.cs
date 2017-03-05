namespace _05CharRotation
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class CharRotation
    {
        static void Main(string[] args)
        {
            string text = Console.ReadLine();

            int[] numbers = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

            string result = "";

            for (int i = 0; i < text.Length; i++)
            {
                if (numbers[i] % 2 == 0)
                {
                    result += (char)(text[i] - numbers[i]);
                }
                else
                {
                    result += (char)(text[i] + numbers[i]);
                }
            }
            Console.WriteLine(result);
        }
    }
}
