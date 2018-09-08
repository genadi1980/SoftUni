using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _02SortWords
{
    class SortWords
    {
        static void Main(string[] args)
        {
            var numbers = Console.ReadLine().Split(' ').ToList();
            numbers.Sort();

            Console.WriteLine(string.Join(" ", numbers));
        }
    }
}
