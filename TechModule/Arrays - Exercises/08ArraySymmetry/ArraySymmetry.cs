namespace _08ArraySymmetry
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class ArraySymmetry
    {
        static void Main()
        {
            string[] arrayInput = Console.ReadLine().Split(' ');

            bool isSymetric = true;

            for (int i = 0; i < arrayInput.Length / 2; i++)
            {
                string firstWord = arrayInput[i];
                string secondWord = arrayInput[arrayInput.Length - 1 - i];

                if (firstWord != secondWord)
                {
                    isSymetric = false;
                    break;
                }

            }

            if (isSymetric)
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
