using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _08BonusScore
{
    public class BonusScore
    {
        public static void Main()
        {
            var input = Console.ReadLine();
            var fiveEnd = input[input.Length - 1];
            var inputNumber = double.Parse(input);
            var bonusScore = 0D;
            

            if (inputNumber <= 100)
            {
                bonusScore += 5;
            }
            else  if (inputNumber>100 && inputNumber <= 1000)
            {
                bonusScore = inputNumber * 20 / 100;
            }
            else if (inputNumber > 1000)
            {
                bonusScore = inputNumber * 10 / 100;
            }

            if (inputNumber % 2 == 0)
            {
                bonusScore += 1;
            }
            else if ( fiveEnd == '5')
            {
                bonusScore += 2;
            }

            Console.WriteLine(bonusScore);
            Console.WriteLine(bonusScore + inputNumber);
        }
    }
}
