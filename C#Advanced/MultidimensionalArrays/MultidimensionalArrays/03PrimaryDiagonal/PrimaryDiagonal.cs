using System;
using System.Linq;


namespace _03PrimaryDiagonal
{
    class PrimaryDiagonal
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());

            long[][] matrix = new long[n][];

            for (int i = 0; i < n; i++)
            {
                matrix[i] = Console.ReadLine()
                    .Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries)
                    .Select(long.Parse)
                    .ToArray();


            }
            //Primary diagonal
            long primarySum = 0;

            for (int row = 0; row < n; row++)
            {
                primarySum += matrix[row][row];
            }

           /* //Secondary diagonal
            long secondarySum = 0;

            for (int row = 0, col = n - 1; row < n; row++)
            {
                secondarySum += matrix[row][col];
            }
            */
            Console.WriteLine(primarySum); 
        }
    }
}
