using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _04MatchingBrackets
{
    public class MatchingBrackets
    {
        static void Main(string[] args)
        {
            var input = Console.ReadLine();

            var stackOpenBracketIndexes = new Stack<int>();

            for (int counter = 0; counter < input.Length; counter++)
            {
                if (input[counter] == '(')
                {
                    stackOpenBracketIndexes.Push(counter);
                }
                if (input[counter] == ')')
                {
                    var openBracketIndex = stackOpenBracketIndexes.Pop();

                    int length = counter - openBracketIndex + 1;
                    Console.WriteLine(input.Substring(openBracketIndex, length));
                }

            }
        }
    }
}
