using System;


namespace TradeComissions
{
    class TradeComissions
    {
        static void Main(string[] args)
        {
            var town = Console.ReadLine().ToLower();
            var salesVolume = double.Parse(Console.ReadLine());

            var comissions = -1.0;

            if (town == "sofia")
            {
                if ( salesVolume >= 0 && salesVolume <= 500 ) comissions = 0.05;
                else if ( salesVolume > 500 && salesVolume <= 1000 ) comissions = 0.07;
                else if( salesVolume > 1000 && salesVolume <= 10000 ) comissions = 0.08;
                else if( salesVolume > 10000 ) comissions = 0.12;
                
            }
            else if (town == "varna")
            {
                if      ( salesVolume >= 0 && salesVolume <= 500 ) comissions = 0.045;
                else if ( salesVolume > 500 && salesVolume <= 1000 ) comissions = 0.075;
                else if ( salesVolume > 1000 && salesVolume <= 10000 ) comissions = 0.10;
                else if( salesVolume > 10000) comissions = 0.13;
                
            }
            else if (town == "plovdiv")
            {
                if ( salesVolume >= 0 && salesVolume <= 500 ) comissions = 0.055;
                else if( salesVolume > 500 && salesVolume <= 1000 ) comissions = 0.08;
                else if( salesVolume > 1000 && salesVolume <= 10000 ) comissions = 0.12;
                else if( salesVolume > 10000 ) comissions = 0.145;
               
            }
            else Console.WriteLine("error");

            if (comissions >= 0)
            {
                Console.WriteLine("{0:f}", salesVolume * comissions);
            }
            else Console.WriteLine("error");


        }
    }
}
