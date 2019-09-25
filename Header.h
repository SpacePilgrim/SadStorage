#include <iostream>
#include <string>
using namespace std;

enum Prof {
	Dir, Acc, Secret, Secur
};

class Employee {
protected:
	string m_name;
	string m_sname;
	string m_lname;
	double m_salary;
	Prof m_prof;

	Employee(Prof prof, string Name, string sName, string lName, double salary)
		: m_prof(prof), m_name(Name), m_sname(m_sname), m_lname(sName), m_salary(salary) {}

public:
	string getFName() { return m_name + ' ' + m_sname + ' ' + m_lname; }
	void setName(string name) { m_name = name; }
	void setsName(string sname) { m_sname = sname; }
	void setlName(string lname) { m_lname = lname; }
	double getSalary() { return m_salary; }
	void setSalary(double salary) { m_salary = salary; }
};