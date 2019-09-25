#pragma once
#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

class Employee {
	string m_name;
	string m_sname;
	string m_lname;
	double m_salary;
public:
	Employee() {
		//m_name = " ";
		//m_sname = " ";
		//m_lname = " ";
		m_salary = 0;
	};
	Employee(string name, string sname, string lname, double salary)
		:m_name(name), m_sname(sname), m_lname(lname), m_salary(salary) {};

	string getName() { return m_name; }
	string getsName() { return m_sname; }
	string getlName() { return m_lname; }
	double getSalary() { return m_salary; }
	void getFNameAndSalary() { cout << m_sname + ' ' + m_name + ' ' + m_lname << ", его дневная ставка " << m_salary << "руб." << endl; }
	void setName(string name) { m_name = name; }
	void setsName(string sname) { m_sname = sname; }
	void setlName(string lname) { m_lname = lname; }
	void setSalary(double salary) { m_salary = salary; }

	virtual ~Employee() {}
};