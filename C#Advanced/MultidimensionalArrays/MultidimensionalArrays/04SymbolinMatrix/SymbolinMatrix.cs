using System;

namespace _04SymbolinMatrix
{
    class SymbolinMatrix
    {
        
        static void Main(string[] args)
        {
            int size = int.Parse(Console.ReadLine());

            char[,] matrix = new char[size, size];

            for (int row = 0; row < size; row++)
            {
                char[] array = Console.ReadLine().ToCharArray();

                for (int col = 0; col < size; col++)
                {
                    matrix[row, col] = array[col];
                }
            }

            string symbol = Console.ReadLine();
            bool isSymbol = false;

            for (int i = 0; i < matrix.GetLength(0); i++)
            {
                for (int j = 0; j < matrix.GetLength(1); j++)
                {
                    if(matrix[i,j].ToString() == symbol)
                    {
                        Console.WriteLine($"({i}, {j})");
                        isSymbol = true;
                        break;
                    }
                }
            }

            if (isSymbol == false)
            {
                Console.WriteLine($"{symbol} does not occur in the matrix");
            }
        }
        
    }
}
