#pragma once
#include "Employee.h"
#include "Director.h"
#include "Accountant.h"
#include "SysAdmin.h"
#include "Secretary.h"

class Heir : public Accountant, public Secretary{
public:
	Heir() {};

	void EqAndWage(vector<string> equipment) {
		showEq(equipment);
		getWage();
	}
};