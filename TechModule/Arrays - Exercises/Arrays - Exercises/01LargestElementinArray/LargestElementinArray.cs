using System;


namespace _01LargestElementinArray
{
    class LargestElementinArray
    {
        static void Main()
        {
            var n = int.Parse(Console.ReadLine());
            var maxNumber = 0;
            var arrayNumbers = new int[n];
            
            for (int i = 0; i < arrayNumbers.Length; i++)
            {
                var number = int.Parse(Console.ReadLine());
                arrayNumbers[i] = number;
                
            }

            for (int j = 1; j < arrayNumbers.Length; j++)
            {
                var previous = arrayNumbers[0];
              
                if (arrayNumbers[j] >= previous)
                {
                    maxNumber = arrayNumbers[j];
                }
                else
                {
                    maxNumber = previous;
                }
            }
           
            Console.WriteLine(maxNumber);

        }

       
    }
}
