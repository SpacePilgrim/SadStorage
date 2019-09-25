#pragma once
#include "Employee.h"
#include <vector>

class SysAdmin :public Employee {
	vector <string> equipment;
public:
	SysAdmin():Employee("Сергей", "Пахомов", "Игоревич", 1250) {};

	void AddEq() {
		string eq;
		cout << "Введите название оборудования: "; cin >> eq; cout << endl;
		equipment.push_back(eq);
	}
	void DelEq() {
		cout << "Введите номер оборудования, от которого необходимо избавиться," << endl << "мы об этом позаботимся.Со списком оборудования можно ознакомиться у секретаря. " << endl;
		int id; 
		while (!(cin >> id) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Error! You can not enter symbols here!" << endl;
		}
		if ((id > equipment.size()) || (id < 1)) return;
		for (int j = id - 1; j < equipment.size() - 1; j++) {
			equipment[j] = equipment[j + 1];
		}
		equipment.pop_back();
	}
	vector<string> getList() {
		return equipment;
	}
};