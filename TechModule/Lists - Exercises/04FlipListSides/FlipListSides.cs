namespace _04FlipListSides
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    

    class FlipListSides
    {
        static void Main()
        {
            var inputList = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
            var outputList = new List<int>();
            var index = false;
            for (int i = 0; i < inputList.Count; i++)
            {
                var tempLeftElement = inputList[i];
                var tempRightElement = inputList[inputList.Count - 1 - i];
                index = (i == 0 || i == inputList.Count - 1 / 2 || i == inputList.Count - 1);

                if (!index)
                {
                    outputList.Add(tempRightElement);
                }
                else
                {
                    outputList.Add(inputList[i]);
                }
            }
            Console.WriteLine(string.Join(" ", outputList));
        }
    }
}
