namespace _03Wormhole
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class Wormhole
    {
        public static void Main()
        {
            var inputLine = Console.ReadLine().Split(' ').Select(int.Parse).ToList();

            var steps = 0;

            for (int i = 0; i < inputLine.Count; i++)
            {
                var currentPosition = inputLine[i];

                if (currentPosition != 0)
                {
                    inputLine[i] = 0;
                    i = currentPosition;                 

                }
                
                    steps++;        
                
                
            }

            Console.WriteLine(steps);
        }
    }
}
