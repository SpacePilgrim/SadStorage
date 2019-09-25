#include <iostream>
#include <locale.h>
#include "Heir.h"
#include"Data.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	Director dir;
	Accountant acc;
	Secretary sec;
	SysAdmin sys;
	Heir heir;
	int number;
	do {
		cout << "Кого из сотрудников вы хотите посмотреть?" << endl << "1 - Директор, 2 - Бухгалтер, 3 - Секретарь," << endl << "4 - СисАдмин, 5 - Дочерний класс Секретаря и Бухгалтера," << endl <<
			"6 - Вывод данных через дочерний класс, 0 - выход из программы : ";
		int num; cin >> number; cout << endl;
		switch (number) {
		case 1:
			cout << "Директор "; dir.getFNameAndSalary(); cout << endl;
			do {
				cout << "Доступные действия:" << endl << "1 - нанять кого-либо, 2 - уволить кого-либо," << endl << "3 - изменить ФИО или зарплату, 0 - вернуться к выбору должностей : ";
				cin >> num;
				switch (num) {
				case 1:
					dir.Hire();
					break;
				case 2:
					dir.Dismiss();
					break;
				case 3:
					string nname, nsname, nlname; double nsalary;
					cout << "Введите новое имя: "; cin >> nname; dir.setsName(nname);
					cout << "Введите новую фамилию: "; cin >> nsname; dir.setName(nsname);
					cout << "Введите новое отчество: "; cin >> nlname; dir.setlName(nlname);
					cout << "Введите новую зарплату (в формате дневной ставки, пожалуйста): "; 
					while (!(cin >> nsalary) || (cin.peek() != '\n'))
					{
						cin.clear();
						while (cin.get() != '\n');
						cout << "Error! You can not enter symbols here!" << endl;
					}
					dir.setSalary(nsalary);
					break;
				}
				cout << endl;
			} while (num != 0);
			break;
		case 2:
			cout << "Бухгалтер "; acc.getFNameAndSalary(); cout << endl;
			do {
				cout << "Доступные действия:" << endl << "1 - рассчитать зарплату для одного из сотрудников," << endl << "2 - изменить ФИО или зарплату, 0 - вернуться к выбору должностей : ";
				cin >> num;
				switch (num) {
				case 1:
					acc.getWage();
					break;
				case 2:
					string nname, nsname, nlname; double nsalary;
					cout << "Введите новое имя: "; cin >> nname; acc.setName(nname);
					cout << "Введите новую фамилию: "; cin >> nsname; acc.setsName(nsname);
					cout << "Введите новое отчество: "; cin >> nlname; acc.setlName(nlname);
					cout << "Введите новую зарплату (в формате дневной ставки, пожалуйста): "; 
					while (!(cin >> nsalary) || (cin.peek() != '\n'))
					{
						cin.clear();
						while (cin.get() != '\n');
						cout << "Error! You can not enter symbols here!" << endl;
					}
					acc.setSalary(nsalary);
					break;
				}
				cout << endl;
			} while (num != 0);
			break;
		case 3:
			cout << "Секретарь "; sec.getFNameAndSalary(); cout << endl;
			do {
				cout << "Доступные действия:" << endl << "1 - вывод списка сотрудников, 2 - вывод списка оборудования," << endl << "3 - изменить ФИО или зарплату, 0 - вернуться к выбору должностей : ";
				cin >> num;
				switch (num) {
				case 1:
					sec.showAll(dir.getList());
					break;
				case 2:
					sec.showEq(sys.getList());
					break;
				case 3:
					string nname, nsname, nlname; double nsalary;
					cout << "Введите новое имя: "; cin >> nname; sec.setName(nname);
					cout << "Введите новую фамилию: "; cin >> nsname; sec.setsName(nsname);
					cout << "Введите новое отчество: "; cin >> nlname; sec.setlName(nlname);
					cout << "Введите новую зарплату (в формате дневной ставки, пожалуйста): "; 
					while (!(cin >> nsalary) || (cin.peek() != '\n'))
					{
						cin.clear();
						while (cin.get() != '\n');
						cout << "Error! You can not enter symbols here!" << endl;
					}
					sec.setSalary(nsalary);
					break;
				}
				cout << endl;
			} while (num != 0);
			break;
		case 4:
			cout << "СисАдмин "; sys.getFNameAndSalary(); cout << endl;
			do {
				cout << "Доступные действия:" << endl << "1 - добавить оборудование, 2 - удалить оборудование," << endl << "3 - изменить ФИО или зарплату, 0 - вернуться к выбору должностей : ";
				cin >> num;
				switch (num) {
				case 1:
					sys.AddEq();
					break;
				case 2:
					sys.DelEq();
					break;
				case 3:
					string nname, nsname, nlname; double nsalary;
					cout << "Введите новое имя: "; cin >> nname; sys.setName(nname);
					cout << "Введите новую фамилию: "; cin >> nsname; sys.setsName(nsname);
					cout << "Введите новое отчество: "; cin >> nlname; sys.setlName(nlname);
					cout << "Введите новую зарплату (в формате дневной ставки, пожалуйста): "; 
					while (!(cin >> nsalary) || (cin.peek() != '\n'))
					{
						cin.clear();
						while (cin.get() != '\n');
						cout << "Error! You can not enter symbols here!" << endl;
					}
					sys.setSalary(nsalary);
					break;
				}
				cout << endl;
			} while (num != 0);
			break;
		case 5:     //Совмещенный класс
			do {
				cout << "Доступные действия: 1 - показать список оборудования и чью-либо зарплату" << endl << "0 - вернуться к панели выбора" << endl;
				cin >> num;
				switch (num) {
				case 1:
					heir.EqAndWage(sys.getList);
					break;
				}
				cout << endl;
			} while (num != 0);
			break;
		case 6:    //Данные через два класса
			Data dirData(dir.getName(), dir.getsName(), dir.getlName(), dir.getSalary());
			Data accData(acc.getName(), acc.getsName(), acc.getlName(), acc.getSalary());
			Data secData(sec.getName(), sec.getsName(), sec.getlName(), sec.getSalary());
			Data sysData(sys.getName(), sys.getsName(), sys.getlName(), sys.getSalary());
			do {
				cout << "Выберите, чьи данные вывести: 1 - Директор, 2 - Бухгалтер," << endl << "3 - Секретарь, 4 - СисАдмин, 0 - вернуться к выбору должностей : ";
				cin >> num;
				switch (num) {
				case 1:
					cout << endl << "Директор " << dirData.getDatamName() + ' ' + dirData.getDataName() + ' ' + dirData.getDatalName() << ", его дневная ставка " << dirData.getDataSalary() << " руб." << endl;
					break;
				case 2:
					cout << endl << "Бухгалтер " << accData.getDatamName() + ' ' + accData.getDataName() + ' ' + accData.getDatalName() << ", его дневная ставка " << accData.getDataSalary() << " руб." << endl;
					break;
				case 3:
					cout << endl << "Секретарь " << secData.getDatamName() + ' ' + secData.getDataName() + ' ' + secData.getDatalName() << ", его дневная ставка " << secData.getDataSalary() << " руб." << endl;
					break;
				case 4:
					cout << endl << "СисАдмин " << sysData.getDatamName() + ' ' + sysData.getDataName() + ' ' + sysData.getDatalName() << ", его дневная ставка " << sysData.getDataSalary() << " руб." << endl;
					break;
				}
				cout << endl;
			} while (num != 0);
			break;
		}
	}while (number != 0);   
}
