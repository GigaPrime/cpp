#include <iostream>
#include "Student.h"
#include "Group.h"

using namespace std;

int main()
{

	Student* st1 = new Student("Dan", "Styopkin", "BNU1621", 12, 12, 12);

	Group g1;
	g1.addStudent(st1);
	g1.showGroupData();
	
	delete st1;
	return 0;
}