using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _18_Number_0._._._100_to_Text
{
    class Program
    {
        static void Main(string[] args)
        {
            var number = int.Parse(Console.ReadLine());
            string posDec = "";
            string posOne = "";
            string posTeen = "";
            string numWord = "";

            if (number >= 0 && number < 100)
            {
                // Number BETWEEN 0 and 99 [0..99]
                var digitDEC = number / 10;
                var digitONE = number % 10;

                switch (digitONE)
                {
                    case 0: posOne = "zero"; break;
                    case 1: posOne = "one"; break;
                    case 2: posOne = "two"; break;
                    case 3: posOne = "three"; break;
                    case 4: posOne = "four"; break;
                    case 5: posOne = "five"; break;
                    case 6: posOne = "six"; break;
                    case 7: posOne = "seven"; break;
                    case 8: posOne = "eight"; break;
                    case 9: posOne = "nine"; break;
                    default: break;
                };

                switch (digitDEC)
                {
                    case 1:
                        {
                            switch (number)
                            {
                                case 10: posTeen = "ten"; break;
                                case 11: posTeen = "eleven"; break;
                                case 12: posTeen = "twelve"; break;
                                case 13: posTeen = "thirteen"; break;
                                case 14: posTeen = "fourteen"; break;
                                case 15: posTeen = "fifteen"; break;
                                case 16: posTeen = "sixteen"; break;
                                case 17: posTeen = "seventeen"; break;
                                case 18: posTeen = "eighteen"; break;
                                case 19: posTeen = "nineteen"; break;
                                default: break;
                            }
                        }; break;
                    case 2: posDec = "twenty"; break;
                    case 3: posDec = "thirty"; break;
                    case 4: posDec = "fourty"; break;
                    case 5: posDec = "fifty"; break;
                    case 6: posDec = "sixty"; break;
                    case 7: posDec = "seventy"; break;
                    case 8: posDec = "eighty"; break;
                    case 9: posDec = "ninety"; break;
                    default: break;
                }


                if (number == 0)
                {
                    numWord = posOne;
                }
                else
                {
                    if (digitDEC == 1)
                    {
                        numWord = posTeen;
                    }
                    else
                    {
                        if (number > 19)
                        {
                            switch (digitONE)
                            {
                                case 0: numWord = posDec; break;
                                default: numWord = posDec + " " + posOne; break;
                            }
                        }
                        else
                        {
                            if (digitDEC == 0)
                            {
                                numWord = posOne;
                            }
                        }


                    }
                }

                Console.WriteLine(numWord);
            } // If [0..99]
            else
            {
                if (number == 100)
                {
                    Console.WriteLine("one hundred");
                }
                else
                {
                    Console.WriteLine("invalid number");
                }
            }

        } // Main
    }
}