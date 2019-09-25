#pragma once
#include "Initials.h"
#include "Payments.h"
#include <string>

class Data:public Initials, public Payments {
	//Initials FIO;
	//Payments ZP;
public:
	Data(string n, string m, string l, double zp) : Initials(n, m, l), Payments(zp) {};
	string getDataName() { return m_name; }
	string getDatamName() { return m_mname; }
	string getDatalName() { return m_lname; }
	double getDataSalary() { return m_salary; }
};