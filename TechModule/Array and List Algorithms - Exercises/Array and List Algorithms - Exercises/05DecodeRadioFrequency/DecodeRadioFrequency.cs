namespace _05DecodeRadioFrequency
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class DecodeRadioFrequency
    {
        static void Main()
        {
            var inputList = Console.ReadLine().Split(' ').ToList();
            var outputList = new List<char>();
            

            for (int i = 0; i < inputList.Count; i++)
            {
                string[] friquency = new string[2];
                friquency = inputList[i].Split('.');
                int LeftPart = int.Parse(friquency[0]);
                int RightPart = int.Parse(friquency[1]);

                char leftChar = (char) LeftPart;
                char rightChar = (char) RightPart;

                if (LeftPart != 0)
                {
                    outputList.Insert(i, leftChar);
                }
                if (RightPart != 0)
                {
                    outputList.Insert(outputList.Count - 1 - i, rightChar);
                }

            }
            outputList.Reverse();
            Console.WriteLine(string.Join("", outputList));
        }
    }
}
//-----------------------------------//
/*
 * using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
 
namespace frequencies
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split();
            StringBuilder left = new StringBuilder();
            StringBuilder right = new StringBuilder();
            foreach (string item in input)
            {
                int dotIndex = DotIndex(item);
                char leftChar = (char)int.Parse(item.Substring(0, dotIndex));
                char rightChar = (char)int.Parse(item.Substring(dotIndex + 1));
                if (leftChar != 0)
                {
                    left.Append(leftChar);
                }
                if (rightChar != 0)
                {
                    right.Append(rightChar);
                }
            }
            string output = left.ToString() + new string(right.ToString().Reverse().ToArray());
            Console.WriteLine(output);
        }
 
        private static int DotIndex(string item)
        {
            for (int i = 0; i < item.Length; i++)
            {
                if (item[i] == '.')
                {
                    return i;
                }
            }
            throw new Exception("No dot found");
        }
    }
}

    */