using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Methods
{
    class BlankReceipt
    {
        static void Main(string[] args)
        {
            PrintReceipt();
        }

        private static void PrintReceipt()
        {
            PrintReceiptHeader();
            PrintReceiptBody();
            PrintReceiptFooter();

        }

        private static void PrintReceiptFooter()
        {
            Console.WriteLine("\u00A9 " + "SoftUni");
        }

        private static void PrintReceiptBody()
        {
            Console.WriteLine("Carged to_____________________");
            Console.WriteLine("Received by___________________");
            Console.WriteLine("------------------------------");
        }

        private static void PrintReceiptHeader()
        {
            Console.WriteLine("CASH RECEIPT");
            Console.WriteLine("------------------------------");
        }
    }
}
