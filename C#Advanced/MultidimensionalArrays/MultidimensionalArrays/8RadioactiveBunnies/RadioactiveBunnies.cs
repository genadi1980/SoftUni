using System;
using System.Linq;
using System.Collections.Generic;

namespace _8RadioactiveBunnies
{
    class Program
    {
        static int playerRow;
        static int playerCol;
        static char[][] jaggedArray;
        static bool isOutside;
        static bool isDead;

        static void Main(string[] args)
        {
            int[] dimension = Console.ReadLine()
                .Split()
                .Select(int.Parse)
                .ToArray();

            int rows = dimension[0];
            int cols = dimension[1];

            jaggedArray = new char[rows][];

            GetJaggedArray(cols);

            string directions = Console.ReadLine();

            MovePlayer(directions);

        

        }

        private static void MovePlayer(string directions)
        {
            for (int i = 0; i < directions.Length; i++)
            {
                char currentStep = directions[i];

                if(currentStep == 'U')
                {
                    Move(-1, 0);
                }
                else if (currentStep == 'L')
                {
                    Move(0, -1);
                }
                else if (currentStep == 'R')
                {
                    Move(0, 1);
                }
                else if (currentStep == 'D')
                {
                    Move(1, 0);
                }

                Spread();

                if (isDead)
                {
                    PrintJaggedArray();
                    Console.WriteLine($"dead: {playerRow} {playerCol}");
                    break;
                }

                else if(isOutside)
                {
                    PrintJaggedArray();
                    Console.WriteLine($"dead: {playerRow} {playerCol}");
                    break;
                }
            }
        }

        private static void Spread()
        {
            Queue<int[]> indexes = new Queue<int[]>();

             
            for (int row = 0; row < jaggedArray.Length; row++)
            {
                for (int col = 0; col < jaggedArray[row].Length; col++)
                {
                    if (jaggedArray[row][col] == 'B')
                    {
                        indexes.Enqueue(new int[] { row, col });
                    }
                }
            }

            while (indexes.Count > 0)
            {
                int[] currentIndex = indexes.Dequeue();

                int targetRow = currentIndex[0];
                int targetCol = currentIndex[1];

                if (isInside(targetRow - 1, targetCol))
                {
                    if (isPlayer(targetRow - 1, targetCol))
                    {
                        isDead = true;
                    }
                    jaggedArray[targetRow - 1][targetCol] = 'B';
                }

                if (isInside(targetRow + 1, targetCol))
                {
                    if (isPlayer(targetRow + 1, targetCol))
                    {
                        isDead = true;
                    }
                    jaggedArray[targetRow + 1][targetCol] = 'B';
                }

                if (isInside(targetRow, targetCol - 1))
                {
                    if (isPlayer(targetRow, targetCol - 1))
                    {
                        isDead = true;
                    }
                    jaggedArray[targetRow][targetCol - 1] = 'B';
                }

                if (isInside(targetRow, targetCol + 1))
                {
                    if (isPlayer(targetRow, targetCol + 1))
                    {
                        isDead = true;
                    }
                    jaggedArray[targetRow][targetCol + 1] = 'B';
                }
            }
        }

        private static bool isPlayer(int row, int col)
        {
            return jaggedArray[row][col] == 'P';
        }

        private static void Move(int row, int col)
        {
            int targetRow = playerRow + row;
            int targetCol = playerCol + col;

            if (!isInside(targetRow, targetCol))
            {
                jaggedArray[playerRow][playerCol] = '.';
                isOutside = true;
            }

            else if (IsBunny(targetRow, targetCol))
            {
                jaggedArray[playerRow][playerCol] = '.';
                playerRow += row;
                playerCol += col;
                isDead = true;
            }

            else
            {
                jaggedArray[playerRow][playerCol] = '.';

                playerRow += row;
                playerCol += col;

                jaggedArray[playerRow][playerCol] = 'P';
            }

        }

        private static bool IsBunny(int targetRow, int targetCol)
        {
            return jaggedArray[targetRow][targetCol] == 'B';

        }

        private static bool isInside(int row, int col)
        {
            return row >= 0 && row < jaggedArray.Length && col >= 0 && col < jaggedArray.Length;
         }

        private static void PrintJaggedArray()
        {
            for (int row = 0; row < jaggedArray.Length; row++)
            {
                Console.WriteLine(string.Join("", jaggedArray[row]));
            }
        }

        private static void GetJaggedArray(int cols)
        {
            for(int row=0; row < jaggedArray.Length; row++)
            {
                string input = Console.ReadLine();

                jaggedArray[row] = new char[cols];

                for (int col = 0; col < jaggedArray[row].Length; col++)
                {
                    jaggedArray[row][col] = input[col];

                    if(jaggedArray[row][col] == 'P')
                    {
                        playerRow = row;
                        playerCol = col;
                    }
                }

            }
        }
    }
}
