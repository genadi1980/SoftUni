using System;
using System.Linq;

namespace _07GroupNumbers
{
    class GroupNumbers
    {
        static void Main(string[] args)
        {
            var numbers = Console.ReadLine()
                .Split(new[] { ", " }, StringSplitOptions.RemoveEmptyEntries)
                .Select(int.Parse)
                .ToArray();


            Console.WriteLine(string.Join(" ", numbers.Where(n => Math.Abs(n) % 3 == 0)));
            Console.WriteLine(string.Join(" ", numbers.Where(n => Math.Abs(n) % 3 == 1)));
            Console.WriteLine(string.Join(" ", numbers.Where(n => Math.Abs(n) % 3 == 2)));
        }
    }
}
