using System;
using System.Collections.Generic;
using System.Linq;

namespace _6TruckTour
{
    class TruckTour
    {
        static void Main(string[] args)
        {
            var n = int.Parse(Console.ReadLine());

            var queue = new Queue<PetrolStation>();

            for (int i = 0; i < n; i++)
            {
                var inputParams = Console.ReadLine()
                    .Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries)
                    .Select(long.Parse)
                    .ToArray();

                long petrolAmaunt = inputParams[0];
                long distanceToNextPump = inputParams[1];

                PetrolStation petrolPump = new PetrolStation(petrolAmaunt, distanceToNextPump);

                    queue.Enqueue(petrolPump);
            }

            int resultIndex = 0;

            bool solutionFound = false;

            while (true)
            {
                PetrolStation startStation = queue.Dequeue();
                queue.Enqueue(startStation);

                long petrol = startStation.petrol;
                petrol -= startStation.distanceToNextPump;
                int currentStationsCount = 1;

                while(petrol >= 0)
                {
                    PetrolStation currentStation = queue.Dequeue();

                    if (currentStation == startStation)
                    {
                        solutionFound = true;
                        break;
                    }

                    queue.Enqueue(currentStation);
                    petrol += currentStation.petrol;
                    petrol -= currentStation.distanceToNextPump;
                    currentStationsCount++;
                }

                if (solutionFound)
                {
                    break;
                }


                resultIndex += currentStationsCount;
                
            }

            Console.WriteLine(resultIndex);
        }
    }

    class PetrolStation
    {
        public long petrol;
        public long distanceToNextPump;

        public PetrolStation(long petrol, long distanceToNextPump)
        {
            this.petrol = petrol;
            this.distanceToNextPump = distanceToNextPump;
        }
    }
}
