#include "pch.h"
#include <iostream>
#include <string>

const unsigned int MAX_NUM = 5;

class BankAccount
{
	std::string name;
	char accountNum[MAX_NUM];
	double balance;
public:
	BankAccount()
	{
		name = "";
		for (int i = 0; i < MAX_NUM; i++)
		{
			accountNum[i] = ' ';
		}
		balance = 0.0;
	}

	void SetName(std::string name)
	{
		this->name = name;
	}

	void SetAccountNumber(char accNumber[MAX_NUM])
	{
		for (int i = 0; i < MAX_NUM; ++i)
		{
			this->accountNum[i] = accNumber[i];
				
		}
	}

	double GetBalance()
	{
		return this->balance;
	}

	void SetBalance(double balance)
	{
		if (balance > 0)
		{
			this->balance = balance;
		}

		else
		{
			std::cout << "The balance couldn't be Negative or ZERO !" << std::endl;

			std::cout << "The balance will be set to 1 " << std::endl;

			this->balance = 1;
		}
	}

	void Print()
	{
		std::cout << "Name : " << name << std::endl;
		std::cout << "Account number : ";
		for ( int i = 0; i < MAX_NUM; ++i)
		{
			std::cout << accountNum[i];
		}

		std::cout << std::endl;
		std::cout << "Balance : " << balance << std::endl;
	}

	void AddBalance(double cash)
	{
		if (cash > 0)
		{
			balance += cash;

			std::cout << "Added: " << cash << std::endl;
			std::cout << "New Balance: " << balance << std::endl;
		}

		else
		{
			std::cout << "The balance couldn't be Negaeve or ZERO !" << std::endl;
		}
	}

	void Withrawing(double cash)
	{
		if (cash > 0 && cash <= balance)
		{
			balance -= cash;
			std::cout << "Withrawed: " << cash << std::endl;
			std::cout << "New Balance: " << balance << std::endl;
		}

		else if (cash <= 0)
		{
			std::cout << "You can not withraw Negative or ZERO cash !" << std::endl;
		}
		else if (cash > balance)
		{
			std::cout << "Not Enough Balance !" << std::endl;
		}

		if (this->balance <= 0)
		{
			this->balance = 0;
		}
	}
	
	

	
};

void ModifyBankAccount(BankAccount object) 
{
	bool exitProgram = false;

	double initialBalance = 0;

	unsigned short userChoice = 0;

	std::cout << "Enter Initial Balance: " << std::endl;

	std::cin >> initialBalance;

	object.SetBalance(initialBalance);

	while (exitProgram == false)
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "Would you like to do ?" << std::endl;
		std::cout << "Press 1 to show all Information..." << std::endl;
		std::cout << "Press 2 to Add Balance..." << std::endl;
		std::cout << "Press 3 to Withraw Balance..." << std::endl;
		std::cout << "Press 0 to exit the program..." << std::endl;

		std::cin >> userChoice;

		switch (userChoice)
		{
			case 0:
				exitProgram = true;
				break;
			case 1:
			{
				object.Print();
			}
			break;
			
			case 2:
			{
				double balanceToAdd = 0;
				std::cout << "Enter Balance to Add: " << std::endl;
				std::cin >> balanceToAdd;
				object.AddBalance(balanceToAdd);
			}
			break;

			case 3:
			{
				if (object.GetBalance() == 0)
				{
					std::cout << "You can't withraw, the balance is: " << object.GetBalance() << std::endl;

					break;
				}

				double balanceTowithraw = 0;
				std::cout << "Enter balance to withraw: " << std::endl;
				std::cin >> balanceTowithraw;
				object.Withrawing(balanceTowithraw);
			}
			break;

		default:
			break;
		}

	}

}

int main()
{
	BankAccount p;
	char accNumber[MAX_NUM];
	std::cout << "Enter Name : " << std::endl;
	std::string name;
	std::cin >> name;

	p.SetName(name);
	

	std::cout << "Enter " << MAX_NUM << " characters IBAN Code: " << std::endl;

	for (int i = 0; i < MAX_NUM; ++i)
	{
		std::cin >> accNumber[i];
	}

	p.SetAccountNumber(accNumber);

	ModifyBankAccount(p);

	return 0;
}