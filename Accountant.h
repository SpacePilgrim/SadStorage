#pragma once
#include "Employee.h"
#include <array>

class Accountant : public Employee {
private:
	const array<double, 4> defWage{ 10000, 5000, 2500, 1250 }; //� ����
public:
	Accountant(): Employee("���������", "��������", "��������", 5000) {};
	
	void getWage() {
		cout << "��� �/� �� ������ ����������? 1 - ��������, 2 - ���������," << endl << "3 - ���������, 4 - ��������� ������������� : ";
		int id; cin >> id;
		cout << endl << "�������� ���������� ���������� ����� " << defWage[id - 1] * 30 << "������" << endl;
	}
};
