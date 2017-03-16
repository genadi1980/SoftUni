namespace _02IntegerInsertion
{
    using System;
    using System.Linq;
  

    class IntegerInsertion
    {
        static void Main()
        {
            var inputList = Console.ReadLine().Split(' ').ToList();
            
            for (int i = 0; i < inputList.Count; i++)
            {
                var enterString = Console.ReadLine();

                if (enterString != "end")
                {
                    var enterParse = int.Parse(enterString);

                    int index = GetFirstDigit(enterParse);

                    
                    inputList.Insert(index, enterString);

                }
                foreach (var item in inputList)
                {
                    Convert.ToString(item);
                }
            }
          
            Console.WriteLine(string.Join(" ", inputList));
        }

        private static int GetFirstDigit(int digit)
        {
            

            if (digit > 10)
            {
                while (digit >= 10)
                    digit /= 10;
            }
            return digit;
        }
    }
}
