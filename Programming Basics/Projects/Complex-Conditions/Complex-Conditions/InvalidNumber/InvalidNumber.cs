using System;


namespace InvalidNumber
{
    class InvalidNumber
    {
        static void Main()
        {
            var inputNumber = int.Parse(Console.ReadLine());
            var inRange = (inputNumber >= 100 && inputNumber <= 200) || inputNumber == 0;
            if (!inRange) Console.WriteLine("invalid");
        }
    }
}
