using System;
using System.Collections.Generic;


namespace _09SimpleTextEditor
{
    class SimpleTextEditor
    {
        static void Main(string[] args)
        {
            Stack<string> stack = new Stack<string>();
            
            string text = string.Empty;

            int operationsCount = int.Parse(Console.ReadLine());

            for (int i = 0; i < operationsCount; i++)
            {
                string[] input= Console.ReadLine().Split();

                string currentCommand = input[0];

                if (currentCommand == "1")
                {
                    string currentText = input[1];
                    stack.Push(text);

                    text += currentText;
                }

                else if (currentCommand == "2")
                {
                    int count = int.Parse(input[1]);

                    if (count > text.Length)
                    {
                        count = Math.Min(count, text.Length);
                    }

                    stack.Push(text);
                    text = text.Substring(0, text.Length - count);

                }

                else if (currentCommand == "3")
                {
                    int index = int.Parse(input[1]);
                    Console.WriteLine(text[index - 1]);

                }

                else if (currentCommand == "4")
                {
                    text = stack.Pop();
                }
            }
        }
    }
}
