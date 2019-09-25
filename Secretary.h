#pragma once
#include "Employee.h"

class Secretary:public Employee {
public:
	Secretary()
		:Employee("Наталья","Мирошова","Анатольевна", 2500) {};

	void showAll(vector<Employee> dependant) {
		if (dependant.empty()) { cout << "В подчинении нет клерков, милорд. Возможно, стоит нанять кого-либо?" << endl; return; }
		for (int i = 0; i < dependant.size(); i++) {
			Employee show;
			show = dependant[i];
			cout << i + 1 << ". ";
			show.getFNameAndSalary();
		}
	}
	void showEq(vector<string> equipment) {
		if (equipment.empty()) {
			cout << "Список оборудования пуст, я сожалею. Возможно," << endl << "стоит добавить в него что - либо в разделе СисАдмина?" << endl; return;
		}
		for (int i = 0; i < equipment.size(); i++)
			cout << equipment[i] << endl;
	}
};