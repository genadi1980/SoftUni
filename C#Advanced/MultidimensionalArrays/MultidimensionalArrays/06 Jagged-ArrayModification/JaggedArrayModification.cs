using System;
using System.Linq;

namespace _06_Jagged_ArrayModification
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            int[,] matrix = new int[n,n];

            for (int row = 0; row < n; row++)
            {
                int[] array = Console.ReadLine()
                    .Split()
                    .Select(int.Parse)
                    .ToArray();
                

                for (int col = 0; col < n; col++)
                {
                    matrix[row, col] = array[col];
                }
            }


            while (true)
            {
                string[] input = Console.ReadLine().Split();
                if (input[0] == "END")
                {
                    break;
                }

                string command = input[0];
                int rowIn = int.Parse(input[1]);
                int colIn = int.Parse(input[2]);
                int value = int.Parse(input[3]);

                if (rowIn < 0 || rowIn > n-1 || colIn < 0 || colIn > n-1)
                {
                    Console.WriteLine("Invalid coordinates");
                    
                }


                else if (command == "Add")
                {                  
                        matrix[rowIn, colIn] += value;                   
                    
                }

                else if (command == "Subtract")
                {
                    matrix[rowIn, colIn] -= value;
                }

            }

            //Printing the matrix

            for (int row = 0; row < matrix.GetLength(0); row++)
            {
                
                for (int col = 0; col < matrix.GetLength(1); col++)
                {
                    if (col != matrix.GetLength(1) - 1)
                    {
                        Console.Write("{0} ", matrix[row, col]);
                    }
                    else Console.Write("{0}", matrix[row, col]);

                }

                Console.WriteLine();
            }
            


        }
    }
}
