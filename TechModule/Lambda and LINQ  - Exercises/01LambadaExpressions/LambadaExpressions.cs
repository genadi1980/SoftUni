namespace _01LambadaExpressions
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    class LambadaExpressions
    {
        public static void Main()
        {
            Dictionary<string, Dictionary<string, string>> lambadaExpressions =
                new Dictionary<string, Dictionary<string, string>>;

            string inputLines = Console.ReadLine();

            while (inputLines != "lambada")
            {
                string[] inputParams = inputLines.Split(new []{' ', '=', '>', '.' }, StringSplitOptions.RemoveEmptyEntries);

                if (inputParams.Length > 1)
                {
                    string selector = inputParams[0];
                    string selectorObject = inputParams[1];
                    string property = inputParams[2];

                    if (!lambadaExpressions.ContainsKey(selector))
                    {
                        lambadaExpressions.Add(selector, new Dictionary<string, string>());
                    }

                    lambadaExpressions[selector][selectorObject] = property;

                     
                } 
                else
                {
                    lambadaExpressions = lambadaExpressions
                        .ToDictionary(selector => selector.Key, selector => selector.Value
                            .ToDictionary(selectorObject => selectorObject.Key, 
                                selectorObject => selectorObject.Value + "." + selectorObject.Value));
                }

                lambadaExpressions
                    .ToList()
                    .ForEach(selector => selector.Value
                    .ToList()
                    .ForEach(selectorObject => Console.WriteLine("{0} => {1}.{2}"
                    , selector.Key
                    ,selectorObject.Key
                    ,selectorObject.Value)));

                inputLines = Console.ReadLine();
            }
        }
    }
}
