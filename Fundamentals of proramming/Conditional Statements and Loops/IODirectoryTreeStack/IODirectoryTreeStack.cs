using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IODirectoryTreeStack
{
    class IODirectoryTreeStack
    {
        static void Main(string[] args)
        {
            TraverseTree(args[0]);

            Console.WriteLine("Press any key");
            Console.ReadKey();

        }

        public static void TraverseTree(string root)
        {
            Stack<string> dirs = new Stack<string>(20);

            if (!System.IO.Directory.Exists(root))
            {
                throw new ArgumentException();
            }

            dirs.Push(root);

            while (dirs.Count > 0)
            {
                string currentDir = dirs.Pop();
                string[] subDirs;

                try
                {
                    subDirs = System.IO.Directory.GetDirectories(currentDir);
                }
                catch (System.IO.DirectoryNotFoundException e)
                {
                    Console.WriteLine(e.Message);
                    continue;
                }

                string[] files = null;

                try
                {
                    files = System.IO.Directory.GetFiles(currentDir);
                }
                catch (UnauthorizedAccessException e)
                {

                    Console.WriteLine(e.Message);
                }
                catch (System.IO.DirectoryNotFoundException e)
                {
                    Console.WriteLine(e.Message);
                    continue;
                }

                foreach (string file in files)
                {
                    try
                    {
                        System.IO.FileInfo fi = new System.IO.FileInfo(file);
                        Console.WriteLine("{0}: {1}, {2}", fi.Name, fi.Length, fi.CreationTime);
                    }
                    catch (System.IO.FileNotFoundException e)
                    {

                        Console.WriteLine(e.Message);
                        continue;
                    }

                    foreach (string str in subDirs)
                        dirs.Push(str);
                }
            }
        }
    }
}
