using System;
using System.Linq;

namespace _01SumMatrixElements
{
    class SumMatrixElements
    {
        static void Main(string[] args)
        {
            

            int[] matrixMetrics = Console.ReadLine()
                .Split(", ", StringSplitOptions.RemoveEmptyEntries)
                .Select(int.Parse)
                .ToArray();

            int[,] matrix = new int[matrixMetrics[0], matrixMetrics[1]];

            
            int sum = 0;

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

            foreach (int element in matrix)
            {
                sum += element;
            }

            Console.WriteLine(matrix.GetLength(0));
            Console.WriteLine(matrix.GetLength(1));
            Console.WriteLine(sum);
        }
    }
}
