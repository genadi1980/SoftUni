namespace _02JapaneseRoulette
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class Japanese
    {
        public static void Main()
        {

            var cylinder = Console.ReadLine().Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries).Select(int.Parse).ToArray();
            var players = Console.ReadLine().Split(' ').ToArray();
            var currentPosition = 0;

                var currenIndex = Array.IndexOf(cylinder, 1);
                currentPosition = currenIndex + 1;
            



        }
    }
}



//namespace _02JapaneseRoulette
//{
//    using System;
//    using System.Collections.Generic;
//    using System.Linq;
//    using System.Text;
//    using System.Threading.Tasks;

//    class JapaneseRoulette
//    {
//        static void Main()
//        {
//            var cylinder = Console.ReadLine().Split(new[] {' '}, StringSplitOptions.RemoveEmptyEntries).Select(int.Parse).ToArray();
//            var players = Console.ReadLine().Split(' ').ToArray();        
//            var currentPosition = 0;


//            for (int i = 0; i < cylinder.Length; i++)
//            {
//                if (cylinder[i] == 1)
//                {
//                    currentPosition = i; break;
//                }

//            }

//            for (int i = 0;  i <= players.Length - 1;  i++)
//            {



//                string[] commandsPattern = players[i].Split(',').ToArray();
//                var strenght = int.Parse(commandsPattern[0]);
//                var direction = commandsPattern[1];



//                    switch (direction)
//                    {
//                        case "Right":
//                        while (strenght > 0)
//                        {
//                            currentPosition++;
//                            strenght--;
//                            if (currentPosition > cylinder.Length - 1)
//                            {
//                                currentPosition = 0;
//                            }

//                        }

//                            break;
//                        case "Left":
//                        while (strenght > 0)
//                        {
//                            currentPosition--;
//                            strenght--;
//                            if (currentPosition < 0)
//                            {
//                                currentPosition = cylinder.Length - 1;
//                            }

//                        }
//                            break;

//                    }                   

//                    if (currentPosition == 2)
//                    {

//                        Console.WriteLine("Game over! Player {0} is dead.", i);
//                        return;

//                    }
//                currentPosition++;
//                    if (currentPosition < 0)
//                        currentPosition = cylinder.Length - 1;
//                    if (currentPosition > cylinder.Length - 1)
//                        currentPosition = 0;
//                }

//            Console.WriteLine("Everybody got lucky!");


//        }
//    }
//}
