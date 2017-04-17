namespace _02HTMLContents
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    using System.IO;

    public class HTMLContents
    {
        public static void Main()
        {
            var lines = File.ReadAllLines("input.txt");
            var title = string.Empty;
            var bodyParts = new List<string>();


            foreach (var line in lines)
            {
                if (line == "exit")
                {
                    break;
                }

                var lineParts = line.Split(' ');

                var tag = lineParts[0];
                var tagContent = lineParts[1];

                if (line == "title")
                {
                    title = tagContent;
                }

                else
                {
                    bodyParts.Add($"\t<{tag}>{tagContent}</{tag}>");
                }

            }


            var result = new StringBuilder();

            result.AppendLine("<!DOCTYPE html>");
            result.AppendLine("<html>");
            result.AppendLine("<head>");

            if (title != string.Empty)
            {
                result.AppendLine($"\t<title>{title}</title>");
            }

            result.AppendLine("</head>");
            result.AppendLine("<body>");

            if (bodyParts.Any())
            {
                result.AppendLine(string.Join(Environment.NewLine, bodyParts));
            }

            result.AppendLine("</body>");
            result.AppendLine("</html>");

            File.WriteAllText("index.html",result.ToString().Trim());
        }
    }
}
