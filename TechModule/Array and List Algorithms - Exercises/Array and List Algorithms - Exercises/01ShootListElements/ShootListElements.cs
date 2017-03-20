namespace _01ShootListElements
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class ShootListElements
    {
        static void Main()
        {
            var numbers = new List<int>();
            var inputLine = Console.ReadLine();

            string output = "";
            var lastRemoved = -1;

            while (inputLine != "stop")
            {
                if (inputLine == "bang")
                {
                    if (numbers.Count == 0)
                    {
                        output = "nobody left to shoot! last one was {0}";
                        break;
                    }
                   var sumElements = SumElements(numbers);
                    double avarage = sumElements / (double) numbers.Count;

                    lastRemoved = ShotElements(numbers, avarage);
                    DecrementElements(numbers);
                    
                }
                else
                {
                    int number = int.Parse(inputLine);
                    numbers.Insert(0, number);
                }

                inputLine = Console.ReadLine();
            }

            if (numbers.Count > 0 && output == "")
            {
                Console.WriteLine("survivors: {0}", string.Join(" ", numbers));
            } 
            else if (numbers.Count == 0 && output == "")
            {
                Console.WriteLine("you shot them all. last one was {0}", lastRemoved);
            }
            else
            {
                Console.WriteLine(output, lastRemoved );
            }
        }

        private static void DecrementElements(List<int> numbers)
        {
            for (int i = 0; i < numbers.Count; i++)
            {
                numbers[i]--;
            }
        }

        static int ShotElements(List<int> numbers, double avarage)
        {
            int result = -1;

            if (numbers.Count == 1)
            {
                Console.WriteLine("shot {0}", numbers[0]);
                result = numbers[0];
                numbers.RemoveAt(0);
                return result;
            }
            for (int i = 0; i < numbers.Count; i++)
            {
                if (numbers[i] < avarage)
                {
                    Console.WriteLine("shot {0}", numbers[i]);
                    result = numbers[i];
                    numbers.RemoveAt(i);
                    break;
                }
            }
            return result;
        }

         static int SumElements(List<int> numbers)
        {
            var sum = 0;

            for (int i = 0; i < numbers.Count; i++)
            {
                sum += numbers[i];
            }

            return sum;
        }
    }
}


/* namespace SootingListElements
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class SootingListElements1
    {
        static void Main()
        {
            var numbers = new List<int>();

            var inputLine = Console.ReadLine();
            var lastRemoved = 0;
            string output = "";

            while (inputLine != "stop")
            {
                if (inputLine == "bang")
                {
                    var avarage = AvarageOfElements(numbers);
                    if (numbers.Count == 0)
                    {
                        output = "nobody left to shoot! last one was {0}";
                        break;
                    }

                    for (int i = 0; i < numbers.Count; i++)
                    {
                       
                        if (numbers[i] <= avarage)
                        {
                            lastRemoved = numbers[i];
                            Console.WriteLine($"shot {numbers[i]}");
                            numbers.RemoveAt(i);
                            break;
                        }

                    }

                    DecrementElements(numbers);
                }
                else
                {
                    var currentElement = int.Parse(inputLine);
                    numbers.Insert(0, currentElement);
                }
                inputLine = Console.ReadLine();
            }

            if (numbers.Count > 0 && output == "")
            {
                Console.WriteLine("survivors: {0}", string.Join(" ", numbers));
            }
            else if (numbers.Count == 0 && output == "")
                        {
                Console.WriteLine("you shot them all. last one was {0}", lastRemoved);
            }
            else
            {
                Console.WriteLine(output, lastRemoved);

            }
        }

         static void DecrementElements(List<int> numbers)
        {
            for (int i = 0; i < numbers.Count; i++)
            {
                numbers[i]--;
            }
        }

         static double AvarageOfElements(List<int> numbers)
        {
            var sum = 0;
            double avarageSum = 0;
            if (numbers.Count != 0)
            {
                for (int i = 0; i < numbers.Count; i++)
                   {
                                sum += numbers[i];
                   }
              avarageSum = sum / (double) numbers.Count;
            }
            
            return avarageSum;
        }
    }
}

*/
