namespace _02OrderedBankingSystem
{
    using System;
    using System.Collections.Generic;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;

    public class OrderedBankingSystem
    {
        public static void Main()
        {
            Dictionary<string, Dictionary<string, decimal>> BankAndAccounts = 
                new Dictionary<string, Dictionary<string, decimal>>();

            string inputLine = Console.ReadLine();

            while (inputLine != "end")
            {
                string[] inputParams = inputLine.Split(new[] { ' ', '>', '-' }, StringSplitOptions.RemoveEmptyEntries);

                string bankName = inputParams[0];
                string bankAccount = inputParams[1];
                decimal bankBalance = decimal.Parse(inputParams[2]);

                if (!BankAndAccounts.ContainsKey(bankName))
                {
                    BankAndAccounts.Add(bankName, new Dictionary<string, decimal>());
                }

                if (!BankAndAccounts[bankName].ContainsKey(bankAccount))
                {
                    BankAndAccounts[bankName].Add(bankAccount, 0);
                }
               
                    BankAndAccounts[bankName][bankAccount] += bankBalance;
                               
                inputLine = Console.ReadLine();
            }

            BankAndAccounts
                 .OrderByDescending(bank => bank.Value.Sum(account => account.Value))
                 .ThenByDescending(bank => bank.Value.Max(account => account.Value))
                 .ToList()
                 .ForEach(bank => bank.Value
                 .OrderByDescending(account => account.Value)
                 .ToList()
                 .ForEach(account => Console.WriteLine("{0} -> {1} ({2})", account.Key, account.Value, bank.Key)));

        }
    }
}
