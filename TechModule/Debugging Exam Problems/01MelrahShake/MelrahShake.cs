namespace _01MelrahShake
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class MelrahShake
    {
        public static void Main()
        {
            var inputString = Console.ReadLine().Trim();
            string pattern = Console.ReadLine();

            bool canShake = true;

            while (canShake)
            {
                int indxFirst = inputString.IndexOf(pattern);
                int indxLast = inputString.LastIndexOf(pattern);

                if (indxFirst > -1 && indxLast > -1 && pattern.Length > 0)
                {
                    StringBuilder sb = new StringBuilder(inputString);

                    sb.Remove(indxFirst, pattern.Length);

                    indxFirst = sb.ToString().IndexOf(pattern);

                    indxLast = sb.ToString().LastIndexOf(pattern);

                    sb.Remove(indxLast, pattern.Length);
                                                                  
                    inputString = sb.ToString();

                    Console.WriteLine("Shaked it.");

                    sb = new StringBuilder(pattern);

                    if (pattern.Length > 0)
                    {
                        sb.Remove(pattern.Length / 2, 1);
                        pattern = sb.ToString();
                    }
                }
                else
                {
                    Console.WriteLine("No shake.");
                    canShake = false;
                    Console.WriteLine(inputString);
                    break;
                }
                    
            }
        }
    }
}
