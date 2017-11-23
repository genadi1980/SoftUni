namespace _03AMinerTask
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;


    public class AMinerTask
    {
        public static void Main()
        {
            Dictionary<string, int> resourceQuantity = new Dictionary<string, int>();

            var input = Console.ReadLine();
            var count = 0;
            var quantity = 0;
            var resource = "";


            while (input != "stop")
            {
                count++;

                if (count % 2 != 0)
                {
                    resource = input;
                    if (!resourceQuantity.ContainsKey(resource))
                    {
                        resourceQuantity[resource] = 0;
                    }
                }
                else
                {
                    quantity = int.Parse(input);
                    resourceQuantity[resource] += quantity;
                }

                input = Console.ReadLine();
            }

            foreach (var resourceQuantityPair in resourceQuantity)
            {
                resource = resourceQuantityPair.Key;
                quantity = resourceQuantityPair.Value;

                Console.WriteLine($"{resource} -> {quantity}", resource, quantity);
            }
        }
    }
}
