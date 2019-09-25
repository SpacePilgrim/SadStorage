#pragma once
#include "Employee.h"
#include <array>

class Accountant : public Employee {
private:
	const array<double, 4> defWage{ 10000, 5000, 2500, 1250 }; //в день
public:
	Accountant(): Employee("Анастасия", "Айфонова", "Олеговна", 5000) {};
	
	void getWage() {
		cout << "Чью з/п вы хотите рассчитать? 1 - Директор, 2 - Бухгалтер," << endl << "3 - Секретарь, 4 - Системный Администратор : ";
		int id; cin >> id;
		cout << endl << "Зарплата выбранного сотрудника равна " << defWage[id - 1] * 30 << "рублей" << endl;
	}
};
