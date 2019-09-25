#pragma once
#include "Employee.h"

class Secretary:public Employee {
public:
	Secretary()
		:Employee("�������","��������","�����������", 2500) {};

	void showAll(vector<Employee> dependant) {
		if (dependant.empty()) { cout << "� ���������� ��� �������, ������. ��������, ����� ������ ����-����?" << endl; return; }
		for (int i = 0; i < dependant.size(); i++) {
			Employee show;
			show = dependant[i];
			cout << i + 1 << ". ";
			show.getFNameAndSalary();
		}
	}
	void showEq(vector<string> equipment) {
		if (equipment.empty()) {
			cout << "������ ������������ ����, � �������. ��������," << endl << "����� �������� � ���� ��� - ���� � ������� ���������?" << endl; return;
		}
		for (int i = 0; i < equipment.size(); i++)
			cout << equipment[i] << endl;
	}
};