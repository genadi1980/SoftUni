namespace _01CharityMarathon
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class CharityMarathon
    {
        public static void Main()
        {
            int days = int.Parse(Console.ReadLine());
            long runners = long.Parse(Console.ReadLine());
            int lapsPerRunner = int.Parse(Console.ReadLine());
            long lapLenght = long.Parse(Console.ReadLine());
            int trackCapacity = int.Parse(Console.ReadLine());

            decimal moneyPerKm = decimal.Parse(Console.ReadLine());

            trackCapacity = trackCapacity * days;
            runners = Math.Min(trackCapacity, runners);

            long totalMeters = runners * lapsPerRunner * lapLenght;
            long totalKm = totalMeters / 1000;

            decimal totalMoney = totalKm * moneyPerKm;

            Console.WriteLine($"Money raised: {totalMoney:F2}");

        }
    }
}
