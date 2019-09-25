#pragma once
#include <string>
using namespace std;

class Initials {
protected:
	string m_name;
	string m_mname;
	string m_lname;
public:
	Initials() {}
	Initials(string N, string M, string L) :m_name(N), m_mname(M), m_lname(L) {}
};