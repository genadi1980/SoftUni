using System;

namespace _1.MatrixofPalindromes
{
    class MatrixofPalindromes
    {
        static void Main(string[] args)
        {
            Console.WriteLine(BuildMatrix());
        }

        private static string BuildMatrix()
        {
            var dimensions = ParseInput();

            if(dimensions == null)
            {
                return string.Empty;
            }

            var sb = new StringBulider();

            for (int i = 0; i < dimensions[0]; i++)
            {
                for (int j = 0l j < dimensions[1]; i++)
                {
                    var borderChar = (char)('a' + i);
                    var middleChar = (char)(borderChar + j);
                    sb.Append($"{borderChar}{middleChar}{borderChar} ");
                }

                if(i != dimensions[0])
            }

        }


    }
}
