using System;
using System.Linq;

namespace _05SquareWithMaximumSum
{
    class SquareWithMaximumSum
    {
        static void Main(string[] args)
        {


            int maxSum = int.MinValue;
            int rowIndex = 0;
            int colIndex = 0;

            int[] matrixMetrics = Console.ReadLine()
            .Split(", ", StringSplitOptions.RemoveEmptyEntries)
            .Select(int.Parse)
            .ToArray();

            int[,] matrix = new int[matrixMetrics[0], matrixMetrics[1]];


            

            for (int row = 0; row < matrix.GetLength(0); row++)
            {
                int[] columElements = Console.ReadLine()
                .Split(", ", StringSplitOptions.RemoveEmptyEntries)
                .Select(int.Parse)
                .ToArray();

                for (int col = 0; col < matrix.GetLength(1); col++)
                {
                    matrix[row, col] = columElements[col];
                }
            }

            for (int row = 0; row < matrix.GetLength(0) - 1; row++)
            {
                for (int col = 0; col < matrix.GetLength(1) - 1; col++)
                {
                    int sum = matrix[row, col] + matrix[row, col + 1] +
                        matrix[row + 1, col] + matrix[row + 1, col + 1];

                    if (sum > maxSum)
                    {
                        rowIndex = row;
                        colIndex = col;
                        maxSum = sum; 
                    }
                }

            }

            

            for (int row = rowIndex; row < rowIndex + 2; row++)
            {
                for (int col = colIndex; col < colIndex + 2; col++)
                {
                    Console.Write($"{matrix[row, col]} ");
                    
                }
                Console.WriteLine();
            }

            Console.WriteLine(maxSum);
        }
    }
}
