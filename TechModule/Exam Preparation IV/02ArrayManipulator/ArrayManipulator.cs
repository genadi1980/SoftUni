namespace _02.ArrayManipulator
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class ArrayManipulator
    {
        public static void Main(string[] args)
        {
            List<long> numbers = Console.ReadLine().Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries).Select(long.Parse).ToList();

            while (true)
            {
                string command = Console.ReadLine().ToLower();
                if (command.ToLower() == "end") break;

                string[] input = command.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
                string action = input[0];
                string type = string.Empty;

                long tempNumMax = long.MinValue;
                long tempNumMin = long.MaxValue;
                int count = 0;
                int index = 0;

                List<long> tempList = new List<long>();
                List<long> tempListCount = new List<long>();
                switch (action)
                {
                    case "exchange":
                        index = int.Parse(input[1]);
                        if (index >= numbers.Count || index < 0)
                        {
                            Console.WriteLine("Invalid index");
                            break;
                        }

                        tempList = numbers.Take(index + 1).ToList();
                        numbers.RemoveRange(0, index + 1);
                        numbers.AddRange(tempList);
                        break;

                    case "max":
                        type = input[1];
                        if (type == "even")
                        {
                            foreach (long num in numbers)
                            {
                                if (num % 2 == 0)
                                {
                                    if (num > tempNumMax)
                                        tempNumMax = num;
                                }
                            }
                            if (tempNumMax == long.MinValue)
                            {
                                Console.WriteLine("No matches");
                            }
                            else
                            {
                                Console.WriteLine("{0}", numbers.LastIndexOf(tempNumMax));
                            }
                        }
                        else if (type == "odd")
                        {
                            foreach (long num in numbers)
                            {
                                if (num % 2 == 1)
                                {
                                    if (num > tempNumMax)
                                        tempNumMax = num;
                                }
                            }
                            if (tempNumMax == long.MinValue)
                            {
                                Console.WriteLine("No matches"); ;
                            }
                            else
                            {
                                Console.WriteLine("{0}", numbers.LastIndexOf(tempNumMax));
                            }
                        }
                        break;

                    case "min":
                        type = input[1];
                        if (type == "even")
                        {
                            foreach (long num in numbers)
                            {
                                if (num % 2 == 0)
                                {
                                    if (num < tempNumMin)
                                        tempNumMin = num;
                                }
                            }
                            if (tempNumMin == long.MaxValue)
                            {
                                Console.WriteLine("No matches");
                            }
                            else
                            {
                                Console.WriteLine("{0}", numbers.LastIndexOf(tempNumMin));
                            }

                        }
                        else if (type == "odd")
                        {
                            foreach (long num in numbers)
                            {
                                if (num % 2 == 1)
                                {
                                    if (num < tempNumMin)
                                        tempNumMin = num;
                                }
                            }
                            if (tempNumMin == long.MaxValue)
                            {
                                Console.WriteLine("No matches");
                            }
                            else
                            {
                                Console.WriteLine("{0}", numbers.LastIndexOf(tempNumMin));
                            }
                        }
                        break;

                    case "first":
                        count = int.Parse(input[1]);
                        type = input[2];

                        if (count > numbers.Count || count < 0)
                        {
                            Console.WriteLine("Invalid count");
                            break;
                        }
                        if (type == "even")
                        {
                            foreach (long num in numbers)
                            {
                                if (num % 2 == 0)
                                {
                                    tempListCount.Add(num);
                                    if (tempListCount.Count == count)
                                    {
                                        Console.WriteLine("[{0}]", string.Join(", ", tempListCount));
                                        break;
                                    }
                                }
                            }
                            if (tempListCount.Count < count)
                            {
                                Console.WriteLine("[{0}]", string.Join(", ", tempListCount));
                            }
                        }
                        else if (type == "odd")
                        {
                            foreach (long num in numbers)
                            {
                                if (num % 2 == 1)
                                {
                                    tempListCount.Add(num);
                                    if (tempListCount.Count == count)
                                    {
                                        Console.WriteLine("[{0}]", string.Join(", ", tempListCount));
                                        break;
                                    }
                                }
                            }
                            if (tempListCount.Count < count)
                            {
                                Console.WriteLine("[{0}]", string.Join(", ", tempListCount));
                            }
                        }
                        break;

                    case "last":
                        count = int.Parse(input[1]);
                        type = input[2];

                        if (count > numbers.Count || count < 0)
                        {
                            Console.WriteLine("Invalid count");
                            break;
                        }
                        if (type == "even")
                        {
                            for (int i = numbers.Count - 1; i >= 0; i--)
                            {
                                if (numbers[i] % 2 == 0)
                                {
                                    tempListCount.Add(numbers[i]);
                                    if (tempListCount.Count == count)
                                    {
                                        tempListCount.Reverse();
                                        Console.WriteLine("[{0}]", string.Join(", ", tempListCount));
                                        break;
                                    }
                                }
                            }
                            if (tempListCount.Count < count)
                            {
                                tempListCount.Reverse();
                                Console.WriteLine("[{0}]", string.Join(", ", tempListCount));
                            }
                        }
                        else if (type == "odd")
                        {
                            for (int i = numbers.Count - 1; i >= 0; i--)
                            {
                                if (numbers[i] % 2 == 1)
                                {
                                    tempListCount.Add(numbers[i]);
                                    if (tempListCount.Count == count)
                                    {
                                        tempListCount.Reverse();
                                        Console.WriteLine("[{0}]", string.Join(", ", tempListCount));
                                        break;
                                    }
                                }
                            }
                            if (tempListCount.Count < count)
                            {
                                tempListCount.Reverse();
                                Console.WriteLine("[{0}]", string.Join(", ", tempListCount));
                            }
                        }
                        break;

                    default:
                        break;
                }
            }
            Console.WriteLine("[{0}]", string.Join(", ", numbers));
        }
    }
}