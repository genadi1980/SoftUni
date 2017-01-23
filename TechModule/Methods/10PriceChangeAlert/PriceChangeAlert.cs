using System;

class PriceChangeAlert
{
    static void Main()
    {
        int numberOfPrices = int.Parse(Console.ReadLine());
        double significance = double.Parse(Console.ReadLine());
        double lastOfPrices = double.Parse(Console.ReadLine());

        for (int i = 0; i < numberOfPrices - 1; i++)
        {
            double currentPrice = double.Parse(Console.ReadLine());
            double difference = DifferenceinPercentage(lastOfPrices, currentPrice);
            bool isSignificantDifference = isDifferent(difference, significance);
            string message = Get(currentPrice, lastOfPrices, difference, isSignificantDifference);
            lastOfPrices = currentPrice;
            Console.WriteLine(message);
        }
        
    }

    private static string Get(double currentPrice, double linesOfPrices, double difference, bool etherTrueOrFalse)
    {
        string to = "";
        if (difference == 0)
        {
            to = string.Format("NO CHANGE: {0}", currentPrice);
        }
        else if (!etherTrueOrFalse)
        {
            to = string.Format("MINOR CHANGE: {0} to {1} ({2:F2}%)", linesOfPrices, currentPrice, difference);
        }
        else if (etherTrueOrFalse && (difference > 0))
        {
            to = string.Format("PRICE UP: {0} to {1} ({2:F2}%)", linesOfPrices, currentPrice, difference);
        }
        else if (etherTrueOrFalse && (difference < 0))
            to = string.Format("PRICE DOWN: {0} to {1} ({2:F2}%)", linesOfPrices, currentPrice, difference);
        return to;
    }

    private static bool isDifferent(double granica, double isDiff)
    {
        if (Math.Abs(granica) >= isDiff)
        {
            return true;
        }
        return false;
    }
    private static double DifferenceinPercentage(double lastPrice, double currentPrice)
    {
        double r = ((currentPrice - lastPrice) / lastPrice) * 100;
        return r;
    }
}
