using System;


namespace Time_15Minutes
{
    class Program
    {
        static void Main(string[] args)
        {
            int hours = int.Parse(Console.ReadLine());
            int minutes = int.Parse(Console.ReadLine());

            
            
               if (hours >= 0 && hours <= 23 & minutes >= 0 && minutes <= 59)     
            {
                minutes = minutes + 15;

                
                if (minutes >= 60)
                {
                    hours++;
                    minutes = minutes - 60;                    
                }

                if (hours >= 24)
                {
                    hours = hours - 24;

                }
                Console.WriteLine("{0}:{1:00}", hours, Math.Abs(minutes));
                }
          
           else
            {
                    Console.WriteLine("Please, fill out hours less than 23 and minutes less than 59");
                }

                  

        

        }
    }
}
