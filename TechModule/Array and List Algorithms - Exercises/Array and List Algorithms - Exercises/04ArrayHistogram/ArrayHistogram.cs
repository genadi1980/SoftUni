namespace _04ArrayHistogram
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class ArrayHistogram
    {
        static void Main()
        {

            var wordsInput = Console.ReadLine().Split(' ').ToList();
            var words = new List<string>();
            var occurance = new List<int>();
            var percentage = 0d;

            for (int i = 0; i < wordsInput.Count; i++)
            {
                var currentWord = wordsInput[i];
                if (words.Contains(currentWord))
                {
                    var wordsIndex = words.IndexOf(currentWord);
                    occurance[wordsIndex]++;
                    

                }
                else
                {
                   words.Add(currentWord);
                    occurance.Add(1);
                }

                // Percentage

                
            }


            //Bubble sort

            var swapped = true;
            while (swapped)
            {
                swapped = false;
                for (int i = 0; i < occurance.Count - 1; i++)
                {
                    if (occurance[i] < occurance[i + 1])
                    {

                        var temp = occurance[i];
                        occurance[i] = occurance[i + 1];
                        occurance[i + 1] = temp;

                        var tempWord = words[i];
                        words[i] = words[i + 1];
                        words[i + 1] = tempWord;
                        swapped = true;
                    }

                }

            }


            for (int i = 0; i < words.Count; i++)
            {
                percentage = occurance[i] * 100 / (double) wordsInput.Count;
                Console.WriteLine("{0} -> {1} times ({2:F2}%)", words[i], occurance[i], percentage);
            }
            
        }
    }
}

