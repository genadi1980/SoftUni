using System;
using System.Linq;


namespace simpleArrays
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] flist = Console.ReadLine().Split().Select(int.Parse).ToArray();

            string check = Console.ReadLine();
            while (!check.Equals("end"))
            {
                int pos = int.Parse(check[0] + "");
                int num = int.Parse(check);
                flist = getNewArray(pos, num, flist);


                check = Console.ReadLine();
            }

            Console.WriteLine(string.Join(" ", flist));
        }

        private static int[] getNewArray(int pos, int num, int[] flist)
        {
            int[] a = new int[flist.Length + 1];
            int index = 0;
            for (int i = 0; i < a.Length; i++)
            {
                if (i == pos)
                {
                    a[pos] = num;
                    a[i + 1] = flist[i];
                }
                else
                {
                    a[i] = flist[index];
                    index++;
                }
            }
            return a;
        }
    }
}