// 04Terran.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <set>

#include "Unit.h"
#include "Producer.h"
#include "Controllable.h"
#include "BasicProducer.h"

template<typename PtrContainer>
void deleteAll(PtrContainer container) {
	for (auto ptr : container) {
		delete ptr;
	}
	container.clear();
}

std::vector<std::string> getWords(std::istream& in) {
	std::vector<std::string> words;

	std::string word;
	while (in >> word) {
		words.push_back(word);
	}

	return words;
}

std::list<UnitPtr> getProducedUnits(const std::set<ProducerPtr> producers) {
	std::list<UnitPtr> producedFromAll;

	for (auto p : producers) {
		std::list<UnitPtr> produced = p->extractProduced();
		producedFromAll.insert(producedFromAll.end(), produced.begin(), produced.end());
	}

	return producedFromAll;
}

int main() {
	std::list<UnitPtr> objects;

	std::set<ProducerPtr> producers;
	std::map<Id, ControllablePtr> controllables;

	BasicProducer initialProducer;
	producers.insert(&initialProducer);

	std::string action;
	while (std::getline(std::cin, action) && action != "end") {
		std::istringstream actionIn(action);
		std::string type;
		actionIn >> type;

		int time;
		if (type == "idle") {
			actionIn >> time;
		}
		else if (type == "create") {
			initialProducer.handleCommand(getWords(actionIn));

			time = 1;
		}
		else if (type == "command") {
			Id id;
			actionIn >> id;

			controllables[id]->handleCommand(getWords(actionIn));

			time = 1;
		}

		for (int i = 0; i < time; i++) {
			for (auto o : objects) {
				o->update();
			}

			for (auto o : getProducedUnits(producers)) {
				ProducerPtr asProducer = dynamic_cast<ProducerPtr>(o);
				if (asProducer) {
					producers.insert(asProducer);
				}

				ControllablePtr asControllable = dynamic_cast<ControllablePtr>(o);
				if (asControllable) {
					controllables[asControllable->getId()] = asControllable;
				}

				objects.push_back(o);
			}
		}
	}

	std::cout << "---" << std::endl;

	for (auto o : objects) {
		std::cout << o->getInfo() << std::endl;
	}

	deleteAll(objects);

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
