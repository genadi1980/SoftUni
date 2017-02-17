using System;


namespace _01LargestElementinArray
{
    class LargestElementinArray
    {
        static void Main()
        {
            var n = int.Parse(Console.ReadLine());
            var arrayNumbers = new int[n];
            int maxNumber = int.MinValue;
            
            for (int i = 0; i <= arrayNumbers.Length - 1; i++)
            {
                var number = int.Parse(Console.ReadLine());
                arrayNumbers[i] = number;
                var temp = arrayNumbers[i];
                if (maxNumber <= temp)
                {
                    maxNumber = temp;
                }
                
            }
            Console.WriteLine(maxNumber);
        }       
    }
}
