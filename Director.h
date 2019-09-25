#pragma once
#include "Employee.h"
#include <vector>

class Director : public Employee {
	vector <Employee> dependant;
public:
	

	Director():Employee("Иван", "Иванов", "Иванович", 10000) {};

	void Hire() {
		string name, sname, lname; double salary;
		cout << "Введите имя: "; cin >> name; cout << endl;
		cout << "Введите фамилию: "; cin >> sname; cout << endl;
		cout << "Введите отчество: "; cin >> lname; cout << endl;
		cout << "Введите зарплату: "; 
		while (!(cin >> salary) || (cin.peek() != '\n'))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Error! You can not enter symbols here!" << endl;
		}
		cout << endl;
		Employee worker(name, sname, lname, salary);
		dependant.push_back(worker);
	}
	void Dismiss() {
		cout << "Введите номер сотрудника, которого хотите уволить." << endl << "Со списком сотрудников можно ознакомиться у секретаря. " << endl;;
		int id; cin >> id;
		if ((id > dependant.size()) || (id < 1)) return;
		for (int j = id - 1; j < dependant.size() - 1; j++) {
			dependant[j] = dependant[j + 1];
		}
		dependant.pop_back();
	}
	vector<Employee> getList() {
		return dependant;
	}
};