namespace _01Exercises
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class Exercise
    {
        public string Topic { get; set; }

        public string CourseName { get; set; }

        public string JudgeContestLink { get; set; }

        public List<string> Problems { get; set; }
    }

    public class exercise
    {
        public static void Main()
        {
            List<Exercise> uprajneniq = new List<Exercise>();

            string inputLine = Console.ReadLine();

            while (inputLine != "go go go")
            {
                string[] inputParams = inputLine.Split(new[] { '-', '>', ' ', ',' }, StringSplitOptions.RemoveEmptyEntries);

                string topic = inputParams[0];
                string courseName = inputParams[1];
                string judgeContestLink = inputParams[2];
                List<string> problems = inputParams.Skip(3).ToList();

                Exercise newExercises = new Exercise();

                newExercises.Topic = topic;
                newExercises.CourseName = courseName;
                newExercises.JudgeContestLink = judgeContestLink;
                newExercises.Problems = problems;

                uprajneniq.Add(newExercises);
                inputLine = Console.ReadLine();
            }

            foreach (Exercise uprajnenie in uprajneniq)
            {
                Console.WriteLine("Exercises: {0}", uprajnenie.Topic);
                Console.WriteLine("Problems for exercises and homework for the \"{0}\" course @ SoftUni.", uprajnenie.CourseName);
                Console.WriteLine("Check your solutions here: {0}", uprajnenie.JudgeContestLink);

                int count = 1;

                foreach (var problem in uprajnenie.Problems)
                {
                    Console.WriteLine("{0}. {1}", count, problem);
                    count++;

                }
            }
        }
    }
}
