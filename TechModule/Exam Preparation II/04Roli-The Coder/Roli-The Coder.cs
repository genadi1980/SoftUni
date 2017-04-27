namespace _04Roli_The_Coder
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    

    public class Event
    {
        public int Id { get; set; }

        public string Name { get; set; }

        public List<string> Participants { get; set; }
    }

    public class Roli_The_Coder
    {
        public static void Main()
        {
            while (true)
            {
                var currentLine = Console.ReadLine();

                var result = new List<Event>();

                var eventsById = new Dictionary<int, Event>();

                if (currentLine == "Time for code")
                {
                    break;
                }

                var lineParts = currentLine
                     .Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);

                var eventId = 0;

                if (!int.TryParse(lineParts[0], out eventId))
                {
                    continue;
                }

                string eventName = null;

                if (lineParts.Length > 1 && lineParts[1].StartsWith("#"))
                {
                    eventName = lineParts[1].Trim('#');
                }
                else
                {
                    continue;
                }

                var participants = new List<string>();

                if (lineParts.Length > 2)                                    
                {
                    participants = lineParts.Skip(2).ToList();

                    if (!participants.All(p => p.StartsWith("@")))
                    {
                        continue;
                    }

                }

                if (eventsById.ContainsKey(eventId) )
                {
                    if (eventsById[eventId].Name == eventName)
                    {
                        var existingEvent = eventsById[eventId];
                        existingEvent.Participants.AddRange(participants);
                    }
                    else
                    {
                        continue;
                    }
                    
                }
                else
                {
                    var newEvent = new Event
                    {
                        Id = eventId,
                        Name = eventName,
                        Participants = participants
                    };

                    result.Add(newEvent);
                    eventsById.Add(eventId, newEvent);
                }

                participants.Sort();
                               

                var sortedEvents = result
                    .OrderByDescending(e => e.Participants.Distinct().Count())
                    .ThenBy(e => e.Name);

                foreach (var ev in sortedEvents)
                {
                    var distinctParticipants = ev.Participants.Distinct().ToList();
                    Console.WriteLine($"{ev.Name} - {distinctParticipants.Count}");
                    foreach (var participant in distinctParticipants.OrderBy(p => p))
                    {
                        Console.WriteLine(participant);
                    }
                }
            } 
        }
    }
}
