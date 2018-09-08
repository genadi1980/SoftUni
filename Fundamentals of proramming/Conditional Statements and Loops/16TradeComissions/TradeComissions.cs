using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _16TradeComissions
{
    public class TradeComissions
    {
        public static void Main(string[] args)
        {
            var city = Console.ReadLine().ToLower();
            var sales = double.Parse(Console.ReadLine());
            var commissions = -1.0;

            if (city == "sofia")
            {
                if (sales >= 0 && sales <= 500) commissions = 5.0 / 100;
                else if (sales > 500 && sales <= 1000) commissions = 7.0 / 100;
                else if (sales > 1000 && sales <= 10000) commissions = 8.0 / 100;
                else if (sales > 500 && sales <= 1000) commissions = 12.0 / 100;
            }
            else if (city == "varna")
            {
                if (sales >= 0 && sales <= 500) commissions = 4.5 / 100;
                else if (sales > 500 && sales <= 1000) commissions = 7.5 / 100;
                else if (sales > 1000 && sales <= 10000) commissions = 10.0 / 100;
                else if (sales > 500 && sales <= 1000) commissions = 13.0 / 100;
            }
            else if (city == "plovdiv")
            {
                if (sales >= 0 && sales <= 500) commissions = 5.5 / 100;
                else if (sales > 500 && sales <= 1000) commissions = 8.0 / 100;
                else if (sales > 1000 && sales <= 10000) commissions = 12.0 / 100;
                else if (sales > 500 && sales <= 1000) commissions = 14.5 / 100;
            }

            if (commissions > 0)
            {
                Console.WriteLine("{0:f2}", sales * commissions);
            }
            else Console.WriteLine("error");
        }
    }
}
