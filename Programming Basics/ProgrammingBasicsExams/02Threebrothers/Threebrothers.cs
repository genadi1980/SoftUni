using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _02Threebrothers
{
    class Threebrothers
    {
        static void Main()
        {
            var firstTime = double.Parse(Console.ReadLine());
            var secondTime = double.Parse(Console.ReadLine());
            var thirdTime = double.Parse(Console.ReadLine());
            var fatherTime = double.Parse(Console.ReadLine());


            var cleanningTime = 1 / (1/firstTime + 1/secondTime + 1/thirdTime);
            

            var restTime = cleanningTime + cleanningTime * 0.15;

            var timeLeft = fatherTime - restTime;
            var actualTime = Math.Abs(timeLeft);

            Console.WriteLine("Cleaning time: {0:f2}", restTime);
            if (timeLeft > 0)
            {
                Console.WriteLine("Yes, there is a surprise - time left -> {0} hours.", Math.Floor(actualTime));
            }
            else
            {
                Console.WriteLine("No, there isn't a surprise - shortage of time -> {0} hours.", Math.Ceiling(actualTime));
            }
            
        }
    }
}
