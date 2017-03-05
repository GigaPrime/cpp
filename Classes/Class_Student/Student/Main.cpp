#include <iostream>
#include "Student.h"
using namespace std;

int main()
{

	Student st1("Dan", "Stuopkin", "BNU", 0, 0, 0);
	st1.print();

	Student st2 = st1;
	st2.print();

	st1.setName("Dan");
	st1.setSurname("Stuopkin");
	st1.setGroup("BNU");
	st1.setProgMark(12);
	st1.setAdminMark(12);
	st1.setDesignMark(12);
	
	st1.print();
	
	st1.input();
	st1.print();
	
	ofstream stS("student.bin", ios::binary | ios::in | ios::ate);
	if (stS)
	{
		st1.save(stS);
	}
	else
	{
		cout << "File Open error: " << "student" << endl;
	}
	
	ifstream stL("student.bin", ios::binary | ios::out);
	if (stL)
	{
		st1.load(stL);
	}
	else
	{
		cout << "File open error: " << "student" << endl;
	}
	
	st1.print();
	
	return 0;
}