namespace _04Ununionlist
{
    using System;
    using System.Linq;


    class Ununionlist
    {
        static void Main()
        {
            var PrimalList = Console.ReadLine()
                .Split(' ')
                .Select(int.Parse)
                .ToList();

            var n = int.Parse(Console.ReadLine());

            for (int i = 0; i < n; i++)
            {
                var currentSequence = Console.ReadLine()
                .Split(' ')
                .Select(int.Parse)
                .ToList();

                
                for (int j = 0; j < currentSequence.Count; j++)
                {
                    if (PrimalList.Contains(currentSequence[j]))
                    {
                        PrimalList.RemoveAll(x => x == currentSequence[j]);
                    }

                    else
                    {
                        PrimalList.Add(currentSequence[j]);
                    }

                }  
                
            }

            PrimalList.Sort();
            Console.WriteLine(string.Join(" ", PrimalList));
        }
    }
}
