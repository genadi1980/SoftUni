namespace _03EnduranceRally
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class EnduranceRally
    {
        public static void Main()
        {
            string[] drivers = Console.ReadLine().Split(' ');

            double[] trackIndices = Console.ReadLine().Split(' ').Select(double.Parse).ToArray();
            double[] checkpointIndexes = Console.ReadLine().Split(' ').Select(double.Parse).ToArray();

            foreach (var driver in drivers)
            {
                double fuel = driver[0];
                                
                for (int currentTrackIndex = 0; currentTrackIndex <= trackIndices.Length; currentTrackIndex++)
                {
                    bool outOfFuel = fuel <= 0;

                    bool reachedEndOfTrack = currentTrackIndex == trackIndices.Length;

                    var raceEnded = outOfFuel || reachedEndOfTrack;

                    if (raceEnded)
                    {
                        if (outOfFuel)
                        {
                            Console.WriteLine($"{driver} - reached {currentTrackIndex -1}");
                        }

                        else if (reachedEndOfTrack)
                        {
                            Console.WriteLine($"{driver} - fuel left {fuel:F2}");
                        }

                        break;
                    }
                    var fuelAtCheckPoint = trackIndices[currentTrackIndex];

                    var isCheckpoint = checkpointIndexes.Contains(currentTrackIndex);
                    if(isCheckpoint)
                    {
                        fuel += fuelAtCheckPoint;
                    }
                    else
                    {
                        fuel -= fuelAtCheckPoint;
                    }
                }
            }
        }
    }
}
