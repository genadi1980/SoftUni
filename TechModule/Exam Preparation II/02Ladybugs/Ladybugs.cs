namespace _02Ladybugs
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class Ladybugs
    {
        public static void Main()
        {
            var sizeField =int.Parse(Console.ReadLine());
            var ladyBugIndexes = Console.ReadLine()
                .Split(new[] { ' '}, StringSplitOptions.RemoveEmptyEntries)
                .Select(int.Parse)
                .ToArray();

            var field = new int[sizeField];

            foreach (var ladyBugIndex in ladyBugIndexes)
            {
                if (ladyBugIndex < 0 || ladyBugIndex >= sizeField)
                {
                    continue;
                }

                field[ladyBugIndex] = 1;
            }

            //loop for command
            while (true)

            {
                var command = Console.ReadLine();

                if (command == "end")
                {
                    break;
                }

                var commandParts = command.Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);

                var currentLadyBugIndex = int.Parse(commandParts[0]);
                var direction = commandParts[1];
                var flyLength = int.Parse(commandParts[2]);

                if (currentLadyBugIndex < 0 || currentLadyBugIndex >= sizeField)
                {
                    continue;
                }

                if (field[currentLadyBugIndex] == 0)
                {
                    continue; 
                }

                field[currentLadyBugIndex] = 0;
                var position = currentLadyBugIndex;

                //loop for each movement of the current ladybug
                while (true)
                {                   

                    if (direction == "right")
                    {
                        position += flyLength;
                    } 
                    else
                    {
                        position -= flyLength;
                    }

                    if (position < 0 || position >= sizeField)
                    {
                        break;
                    }

                    if (field[position] == 1)
                    {
                        continue;
                    }
                    else
                    {
                        field[position] = 1;
                        break;
                    }
                }
            }

            Console.WriteLine(string.Join(" ", field));


        }
    }
}
