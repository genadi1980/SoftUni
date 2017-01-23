using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Methods_Exercises
{
    class MethodsExercises
    {
        static void PrintGreeting(string name)
        {
            Console.WriteLine("Hello, {0}!", name);
        }

        static void Main(string[] args)
        {
            var name = Console.ReadLine();
            PrintGreeting(name);
        }
    }
}
