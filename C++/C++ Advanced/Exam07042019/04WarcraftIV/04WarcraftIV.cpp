// 04WarcraftIV.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <sstream>
#include <iostream>

#include "Archmage.h"
#include "DeathKnight.h"
#include "DrawRanger.h"

#define HEROES_SIZE 3

int main()
{
	std::string name;
	int maxMana = 0;
	int baseManaRegenRate = 0;
	int manaRegenModifier = 0;

	std::cin >> name >> maxMana >> baseManaRegenRate >> manaRegenModifier;
	Archmage archmage(name, maxMana, baseManaRegenRate, manaRegenModifier);

	std::cin >> name >> maxMana >> baseManaRegenRate;
	DeathKnight deathKnight(name, maxMana, baseManaRegenRate);

	std::cin >> name >> maxMana >> baseManaRegenRate;
	DrawRanger drawRanger(name, maxMana, baseManaRegenRate);

	std::cin.ignore();

	std::vector<Hero *> heroes(HEROES_SIZE);
	heroes[0] = &archmage;
	heroes[1] = &deathKnight;
	heroes[2] = &drawRanger;

	for (int i = 0; i < HEROES_SIZE; ++i)
	{
		heroes[i]->generateSpells();
	}

	std::string input;
	getline(std::cin, input);
	std::istringstream sstr(input);
	int currAction = 0;

	while (sstr >> currAction)
	{
		switch (currAction)
		{
		case ActionType::CAST_BASIC_SPELL:
			for (int i = 0; i < HEROES_SIZE; ++i)
			{
				heroes[i]->castSpell(SpellType::BASIC);
			}
			break;

		case ActionType::CAST_ULTIMATE_SPELL:
			for (int i = 0; i < HEROES_SIZE; ++i)
			{
				heroes[i]->castSpell(SpellType::ULTIMATE);
			}
			break;

		case ActionType::REGENERATE_MANA:
			for (int i = 0; i < HEROES_SIZE; ++i)
			{
				heroes[i]->regenerateMana();
			}
			break;
		}
	}

	return 0;
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
