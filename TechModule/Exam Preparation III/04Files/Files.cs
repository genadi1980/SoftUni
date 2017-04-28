namespace _04Files
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class File
    {
        public string Name { get; set; }

        public string Folder { get; set; }

        public long Size { get; set; }
    }

    public class Files
    {
        public static void Main()
        {
            var fileNumber = int.Parse(Console.ReadLine());

            var allFiles = new List<File>();

            for (int i = 0; i < fileNumber; i++)
            {
                var input = Console.ReadLine().Split('\\');

                var fileData = input.Last().Split(';');

                var fileName = fileData[0];

                var fileSize = fileData.Last();

                var currFile = new File();

                currFile.Folder = input[0];

                currFile.Name = fileName;

                currFile.Size = long.Parse(fileSize);

                allFiles.Add(currFile);
            }

            var command = Console.ReadLine().Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);

            var folder = command.Last();

            var ext = command.First();

            var results = new Dictionary<string, long>();

            foreach (var file in allFiles)
            {
                if (file.Folder.Equals(folder) && file.Name.EndsWith(ext))
                {
                    results[file.Name] = file.Size;
                }
            }

            if (results.Count == 0)
            {
                Console.WriteLine("No");
            }

            else
            {
                foreach (var result in results.OrderByDescending(r => r.Value).ThenBy(r => r.Key))
                {
                    Console.WriteLine($"{result.Key} - {result.Value} KB");
                }
            }
        }
    }
}
