namespace _04GrandpaStavri
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class GrandpaStavri
    {
        public static void Main()
        {
            var days = int.Parse(Console.ReadLine());

            var totalQuantity = 0D;
            var totalDegree = 0D;
            for (int i = 0; i < days; i++)
            {
                var RakiaLiters = double.Parse(Console.ReadLine());
                var RakiaDegree = double.Parse(Console.ReadLine());

                totalQuantity += RakiaLiters;
                var Degree = RakiaLiters * RakiaDegree;
                totalDegree += Degree;

            }

            var DegreePerLiter = totalDegree / totalQuantity;

            Console.WriteLine("Liter: {0:f2}", totalQuantity);
            Console.WriteLine("Degrees: {0:f2}", DegreePerLiter);

            if (DegreePerLiter < 38)
            {
                Console.WriteLine("Not good, you should baking!");
            }
            else if (DegreePerLiter >= 38 && DegreePerLiter <= 42)
            {
                Console.WriteLine("Super!");
            }
            else
            {
                Console.WriteLine("Dilution with distilled water!");
            }
        }
    }
}
