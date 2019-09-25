#pragma once
#include "Employee.h"
#include <vector>

class Director : public Employee {
	vector <Employee> dependant;
public:
	

	Director():Employee("����", "������", "��������", 10000) {};

	void Hire() {
		string name, sname, lname; double salary;
		cout << "������� ���: "; cin >> name; cout << endl;
		cout << "������� �������: "; cin >> sname; cout << endl;
		cout << "������� ��������: "; cin >> lname; cout << endl;
		cout << "������� ��������: "; 
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
		cout << "������� ����� ����������, �������� ������ �������." << endl << "�� ������� ����������� ����� ������������ � ���������. " << endl;;
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