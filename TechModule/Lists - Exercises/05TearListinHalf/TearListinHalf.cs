namespace _05TearListinHalf
{
    using System;
    using System.Collections.Generic;
    using System.Linq;


    class TearListinHalf
    {
        static void Main()
        {
            var inputList = Console.ReadLine().Split(' ').Select(int.Parse).ToList();
            var leftList = new List<int>();
            var rightList = new List<int>();
            var result = new List<int>();

            var index = inputList.Count - 1;

            for (int i = 0; i <= index / 2; i++)
            {
                leftList.Add(inputList[i]);
                rightList.Add(inputList[inputList.Count - 1 - i]);
            }

            rightList.Reverse();

            for (int i = 0; i < leftList.Count; i++)
            {
                result.Add(rightList[i] / 10);
                result.Add(leftList[i]);
                result.Add(rightList[i] % 10);
            }

            Console.WriteLine(string.Join(" ", result));
        }
    }

//        using System;
//using System.Collections.Generic;
//using System.Linq;
 
//public class TearInHalf
//    {
//        public static void Main()
//        {
//            var input = Console.ReadLine().Split().Select(int.Parse).ToArray();
//            var firstHalf = input.Take(input.Length / 2).ToArray();
//            var secondHalf = input.Skip(input.Length / 2).ToArray();
//            var lenght = input.Length + (input.Length / 2);
//            var result = new List<int>(lenght);


//            for (int i = 0; i < firstHalf.Length; i++)
//            {
//                result.Add(secondHalf[i] / 10);
//                result.Add(firstHalf[i]);
//                result.Add(secondHalf[i] % 10);
//            }

//            Console.WriteLine(string.Join(" ", result));

//        }
//    }
//}
//}
