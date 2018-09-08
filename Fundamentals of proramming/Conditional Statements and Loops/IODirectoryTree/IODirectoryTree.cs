using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace IODirectoryTree
{
    public class IODirectoryTree
    {
        static System.Collections.Specialized.StringCollection log = new System.Collections.Specialized.StringCollection();

        static void Main(string[] args)
        {
            string[] drives = System.Environment.GetLogicalDrives();

            foreach (string dr in drives)
            {
                System.IO.DriveInfo di = new System.IO.DriveInfo(dr);

                if (!di.IsReady)
                {
                    Console.WriteLine("The drive {0} could not be read", di.Name);
                    continue;
                }

                System.IO.DirectoryInfo rootDir = di.RootDirectory;
                WalkDirectoryTree(rootDir);
            }

            Console.WriteLine("File with restricted access:");
            foreach (string s in log)
            {
                Console.WriteLine(s);
            }
        }

        private static void WalkDirectoryTree(System.IO.DirectoryInfo root)
        {
            System.IO.FileInfo[] files = null;
            System.IO.DirectoryInfo[] subDirs = null;

            try
            {
                files = root.GetFiles("*.*");
            }

            catch (UnauthorizedAccessException e)
            {
                log.Add(e.Message);
            }

            catch (System.IO.DirectoryNotFoundException e)
            {
                Console.WriteLine(e.Message);
            }

            if (files != null)
            {
                foreach (System.IO.FileInfo fi in files)
                {
                    Console.WriteLine(fi.FullName);
                }

                subDirs = root.GetDirectories();

                foreach (System.IO.DirectoryInfo dirInfo in subDirs)
                {
                    WalkDirectoryTree(dirInfo);
                }
            }
        }
    }
}
