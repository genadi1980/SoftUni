namespace _02AverageCaracterDel
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;


    class AverageCaracterDel
    {
        static void Main()
        {
            var inputString = Console.ReadLine().ToList();
            var inputCharList = new List<char>();
            var sum = 0;

            for (int i = 0; i < inputString.Count; i++)
            {
                var currentChar = inputString[i];
                if (currentChar != ' ')
                {
                    inputCharList.Add(currentChar);

                }

            }
            sum = SumOfChars(inputCharList);
            DelimitCalculations(inputString, inputCharList, sum);

            Console.WriteLine(string.Join("", inputString));

        }

        private static void DelimitCalculations(List<char> inputString, List<char> inputCharList, int sum)
        {
            var delimitedSymbol = (char)(sum / inputCharList.Count);
            char delimitedToUpper = Char.ToUpper(delimitedSymbol);


            for (int i = 1; i < inputString.Count - 1; i++)
            {
                if (inputString[i] == ' ')
                {
                    inputString.RemoveAt(i);
                    inputString.Insert(i, delimitedToUpper);
                    i++;
                }

            }
        }

        static int SumOfChars (List<char> chars)
        {
            var sum = 0;

            for (int i = 0; i < chars.Count; i++)
            {
                sum += chars[i];
            }

            return sum;
        }
    }
}
