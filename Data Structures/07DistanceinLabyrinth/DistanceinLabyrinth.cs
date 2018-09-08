namespace _07DistanceinLabyrinth
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    
    public class DistanceinLabyrinth
    {
        public static void Main()
        {
            string[,] lab = new string[,]
            {
                { "0", "0"},
                { "*", "x"},
            };

            int row = 1;
            int col = 0;

            if (row + 1 <  0)
            {

            }
        }
    }

    public class Cell
    {
        public int Row { get; set; }
        public int Col { get; set; }
        public bool Visited { get; set; }
        public int Movies { get; set; }
    }
}
