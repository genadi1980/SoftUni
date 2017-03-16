using System;
using System.Linq;


namespace _03CamelBack
{
    class CamelBack
    {
        static void Main()
        {
            var buildings = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
            var stableBack = int.Parse(Console.ReadLine());

            var rounds = 0;
            while (buildings.Count > stableBack)
            {
                buildings.RemoveAt(0);
                buildings.RemoveAt(buildings.Count - 1);
                rounds++;
            }

            if (rounds == 0)
            {
                Console.WriteLine("already stable: {0}", string.Join(" ", buildings));
            }
            else
            {
                Console.WriteLine("{0} rounds", rounds);
                Console.WriteLine("remaining: {0}", string.Join(" ", buildings));
            }


        }
    }
}
