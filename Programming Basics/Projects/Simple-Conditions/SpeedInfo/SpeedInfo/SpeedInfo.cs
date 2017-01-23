using System;


namespace SpeedInfo
{
    class SpeedInfo
    {
        static void Main(string[] args)
        {
            var speedInput = double.Parse(Console.ReadLine());

            if (speedInput <= 10)
            {
                Console.WriteLine("slow");
            }
            else if (speedInput > 10 && speedInput <= 50)
            {
                Console.WriteLine("average");
            }
            else if (speedInput > 50 && speedInput <= 150)
            {
                Console.WriteLine("fast");
            }
            else if (speedInput > 150 && speedInput <= 1000)
            {
                Console.WriteLine("ultra fast");
            }
            else if (speedInput > 1000)
            {
                Console.WriteLine("extremely fast");
            }
        }
    }
}
