namespace _01DistinctList
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    


    class DistinctList
    {
        static void Main()
        {
            var inputList = Console.ReadLine().Split(' ').Select(int.Parse).ToList();

            for (int i = 0; i < inputList.Count; i++)
            {
                for (int j = i + 1; j < inputList.Count; j++)
                {
                    if (inputList[i] == inputList[j])
                    {
                        inputList.RemoveAt(j);
                        i = 0;
                    }
                }
            }

            Console.WriteLine(string.Join(" ", inputList));
        }
    }
}
