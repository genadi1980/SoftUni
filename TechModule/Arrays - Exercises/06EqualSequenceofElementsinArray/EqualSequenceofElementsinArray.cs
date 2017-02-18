namespace _06EqualSequenceofElementsinArray
{
    using System;
    using System.Linq;
    
    class EqualSequenceofElementsinArray
    {
        static void Main()
        {
            int[] arrayInput = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            bool isEqual = true;
            

            for (int i = 1; i < arrayInput.Length; i++)
            {
                if (arrayInput[i] == arrayInput[i-1])
                {
                    isEqual = true;
                    
                }
                else
                {
                    isEqual = false;
                    break;
                }
            }
            if (isEqual)
            {
                Console.WriteLine("Yes");
            }
            else
            {
                Console.WriteLine("No");
            }
   
        }
    }
}
