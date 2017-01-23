using System;


namespace Cinema
{
    class Cinema
    {
        static void Main(string[] args)
        {
            var typeCinema = Console.ReadLine().ToLower();
            var rows = double.Parse(Console.ReadLine());
            var columns = double.Parse(Console.ReadLine());
            var price = 0.0;
            var sum = 0.0;
            switch (typeCinema)
            {
                case "premiere": price = 12.00; break;
                case "normal": price = 7.50; break;
                case "discount": price = 5.00; break;
            }
            
           // sum = ;
            Console.WriteLine("{0:f2} leva", price * rows * columns);

        }
    }
}
