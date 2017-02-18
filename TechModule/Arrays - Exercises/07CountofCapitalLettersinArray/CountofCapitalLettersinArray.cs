namespace _07CountofCapitalLettersinArray
{
    using System;    
    using System.Linq;
    
    
    class CountofCapitalLettersinArray
    {
        static void Main()
        {
            string[] arrayInput = Console.ReadLine().Split(' ');
            int count = 0;

            for (int i = 0; i < arrayInput.Length; i++)
            {
                string currentword = arrayInput[i];
                if (currentword.Length == 1)
                {
                    char character = currentword[0];

                    if (character >= 'A' && character <= 'Z')
                    {
                        count++;
                    }
                    
                }
                
            }
            Console.WriteLine(count);
        }
    }
}
