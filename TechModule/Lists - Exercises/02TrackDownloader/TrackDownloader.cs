namespace _02TrackDownloader
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class TrackDownloader
    {
        static void Main()
        {
            var blacklistedWords = Console.ReadLine().Split(' ').ToList();
            var donwloadedSongs = new List<string>();

            string line = Console.ReadLine();

            while (line != "end")
            {

                var isInblacklist = false;

                foreach (var blacklistedWord in blacklistedWords)
                {
                    if (line.Contains(blacklistedWord))
                    {
                        isInblacklist = true;
                        break;
                    }
                }
                if (!isInblacklist)
                {
                    donwloadedSongs.Add(line);
                }
                line = Console.ReadLine();
            }
            donwloadedSongs.Sort();

            foreach (var songs in donwloadedSongs)
            {
                Console.WriteLine(songs);
            }
            
        }
    }
}
