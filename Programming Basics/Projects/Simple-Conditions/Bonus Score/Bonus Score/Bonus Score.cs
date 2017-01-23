using System;


namespace Bonus_Score
{
    class Program
    {
        static void Main(string[] args)
        {
            var points = int.Parse(Console.ReadLine());
            var bonusPoints = 0.0;

            if (points < 100)
            {
                bonusPoints = 5;
            }
            else if (points >= 100 && points < 1000)
            {
                bonusPoints = points * 0.20;
            }
            else if (points >= 1000)
            {
                bonusPoints = points * 0.10;
            }

            if (points % 2 == 0)
            {
                bonusPoints = bonusPoints + 1;
            }
            
            if (points % 10 == 5)
            {
                bonusPoints = bonusPoints + 2;
            }

            Console.WriteLine(bonusPoints);
            Console.WriteLine(bonusPoints + points);
        }
    }
}
