namespace _05NoteStatistics
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class NoteStatistics
    {
        public static object resultNotes { get; private set; }

        static void Main()
        {
            var inputFriquencies = Console.ReadLine()
                .Split(' ')
                .Select(double.Parse)
                  .ToList();

            var notes = "C C# D D# E F F# G G# A A# B "
                .Split(' ')
                .ToList();

            var friquencies = "261.63 277.18 293.66 311.13 329.63 349.23 369.99 392.00 415.30 440.00 466.16 493.88"
                .Split(' ')
                .Select(double.Parse)
                .ToList();

            var resultNotes = new List<string>();

            foreach (var friquency in inputFriquencies)
            {
                var friquencyIndex = friquencies.IndexOf(friquency);
                var note = notes[friquencyIndex];

                resultNotes.Add(note);

            }

            Console.WriteLine("Notes: {0}", string.Join(" ", resultNotes));

            var naturals = new List<string>();
            var sharps = new List<string>();

            foreach (var note in resultNotes)
            {
                if (note.Contains("#"))
                {
                    sharps.Add(note);
                }
                else
                {
                    naturals.Add(note);
                }
            }
            Console.WriteLine("Naturals: {0}", string.Join(", ", naturals));
            Console.WriteLine("Sharps: {0}", string.Join(", ", sharps));


            var naturalsSum = GetNoteSum(notes, friquencies, naturals);
            var sharpsSum = GetNoteSum(notes, friquencies, sharps);

            Console.WriteLine($"Naturals sum: {naturalsSum}");
            Console.WriteLine($"Sharps sum: {sharpsSum}");
        }

        static double GetNoteSum(List<string> allNotes, List<double> allFriquencies, List<string> notes)
        {
            var noteSum = 0d;

            foreach (var note in notes)
            {
                var friquencyIndex = allNotes.IndexOf(note);
                var friquency = allFriquencies[friquencyIndex];
                noteSum += friquency;
            }
            return noteSum;
        }
    }
}
