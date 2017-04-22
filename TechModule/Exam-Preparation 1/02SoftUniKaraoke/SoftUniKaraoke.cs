namespace _02SoftUniKaraoke
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class SoftUniKaraoke
    {
        public static void Main()
        {
            Dictionary<string, SortedSet<string>> outputList = new Dictionary<string, SortedSet<string>>();
            var inputParticpants = Console.ReadLine().Split(new[] { ',', ' ' }, StringSplitOptions.RemoveEmptyEntries).ToArray();
            var inputSongs = Console.ReadLine()
                .Split(',')
                .Select(a => a.Trim())
                .ToArray();

            var inputLine = Console.ReadLine();

            while (inputLine != "dawn")
            {
                string[] inputParams = inputLine
                    .Split(',').
                    Select(a => a.Trim())
                    .ToArray();

                var currentParticipant = inputParams[0];
                var currentSong = inputParams[1];
                var currentAward = inputParams[2];

                if (inputParticpants.Contains(currentParticipant) && inputSongs.Contains(currentSong))
                {
                    if (!outputList.ContainsKey(currentParticipant))
                    {
                        outputList[currentParticipant] = new SortedSet<string>();                        
                    }
                    outputList[currentParticipant].Add(currentAward);
                }

               
               
                inputLine = Console.ReadLine();
            }

            if (!outputList.Any())
            {
                Console.WriteLine("No awards");
                return;
            }

            var sortedParticipantsAward = outputList
                .OrderByDescending(x => x.Value.Count)
                .ThenBy(a => a.Key)
                .ToDictionary(x => x.Key, x => x.Value);

           

            foreach (var participantAward in sortedParticipantsAward)
            {
                var participant = participantAward.Key;
                var awards = participantAward.Value;      

                Console.WriteLine("{0}: {1} awards", participant, awards.Count);

                foreach (var award in awards)
                {
                    Console.WriteLine($"--{award}");
                }
              
            }
        }
    }
}
