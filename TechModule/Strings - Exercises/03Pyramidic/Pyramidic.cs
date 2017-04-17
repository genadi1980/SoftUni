namespace _03Pyramidic
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class Pyramidic
    {
        public static void Main()
        {
            List<string> pyramids = new List<string>();

            int n = int.Parse(Console.ReadLine());

            string[] lines = new string[n];

            for (int i = 0; i < n; i++)
            {
                lines[i] = Console.ReadLine();
            }

            for (int i = 0; i < lines.Length; i++)
            {
                string currentLines = lines[i];
               

                for (int j = 0; j < currentLines.Length; j++)
                {
                    char currentCharacter = currentLines[j];

                    string currentPyramid = FindPyramid(i, currentCharacter, lines);

                    pyramids.Add(currentPyramid.Trim());
                }
            }

            Console.WriteLine(pyramids.OrderByDescending(x => x.Length).First());
        }

        private static string FindPyramid(int currentLineIndex, char currentCharacter, string[] lines)
        {
            
            int layer = 1;
            string currentPyramid = "";
            for (int k = currentLineIndex; k < lines.Length; k++)
            {
                string currentLayer = new string(currentCharacter, layer);

                if (lines[k].Contains(currentLayer))
                {
                    currentPyramid += currentLayer + "\r\n";
                }
                else
                {
                    break;
                }
                layer += 2;
            }

            return currentPyramid;
        }
    }
}
