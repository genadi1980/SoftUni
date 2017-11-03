namespace _03OnTimefortheExam
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class OnTimefortheExam
    {
        public static void Main()
        {
            var hourExamStart = int.Parse(Console.ReadLine());
            var minExamStart = int.Parse(Console.ReadLine());
            var arrivalHour = int.Parse(Console.ReadLine());
            var arrivalMin = int.Parse(Console.ReadLine());


            var examTime = (hourExamStart * 60) + minExamStart;
            var arrivelTime = (arrivalHour * 60) + arrivalMin;

            var hourDiff = examTime - arrivelTime;
            var diffModul = Math.Abs(hourDiff);

            var hours = diffModul / 60;
            var minutes = diffModul % 60;

            if (hourDiff >= 0 && hourDiff <= 30)
            {
                Console.WriteLine("On time");
                if (hourDiff != 0)
                {
                    Console.WriteLine("{0} minutes before the start", diffModul.ToString("D2"));
                }
            }
            else if (hourDiff > 30)
            {
                Console.WriteLine("Early");
                if (diffModul < 60)
                {
                    Console.WriteLine("{0:00} minutes before the start", diffModul);
                }
                else
                {
                    Console.WriteLine("{0}:{1:00} hours before the start", hours,minutes);
                }
            }


            else if (hourDiff < 0)
            {
                Console.WriteLine("Late");
                if (diffModul < 60 )
                {
                    Console.WriteLine("{0} minutes after the start", diffModul.ToString("D2"));

                }
                else
                {
                    Console.WriteLine("{0}:{1} hours after the start", hours, minutes.ToString("00"));
                }
            }


        }
    }
}
