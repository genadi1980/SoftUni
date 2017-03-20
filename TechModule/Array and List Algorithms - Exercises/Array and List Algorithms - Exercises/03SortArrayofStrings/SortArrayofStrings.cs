namespace _03SortArrayofStrings
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class SortArrayofStrings
    {
        static void Main()
        {
            var inputString = Console.ReadLine().Split(' ').ToList();
            
            //Buble sort

            var hasSwapped = true;

            while (hasSwapped)
            {
                hasSwapped = false;
                
                for (int i = 0; i < inputString.Count - 1; i++)
                {
                   
                    if (inputString[i].CompareTo(inputString[i + 1]) < 0)
                    {
                        var temp = inputString[i];
                        inputString[i] = inputString[i + 1];
                        inputString[i + 1] = temp;                        
                        hasSwapped = true;
                        
                    }
                   
                }
                
            }
            inputString.Reverse();
            Console.WriteLine(string.Join(" ", inputString));


        }
    }
}
