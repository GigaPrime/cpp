#include <iostream>
#include <string>
#include "Group.h"
#include "Student.h"

using namespace std;

Group::Group()
{
	groupMembers.reserve(0);
	groupName = new char;
}

Group::Group(vector<Student*> students, char* n)
{
	for (unsigned int i = 0; i < students.size(); i++)
	{
		groupMembers.push_back(students[i]);
	}
	groupName = new char[strlen(n) + 1];
	strcpy(groupName, n);
}

Group::Group(const Group& group)
{
	for (unsigned int i = 0; i < group.groupMembers.size(); i++)
	{
		groupMembers.push_back(group.groupMembers[i]);
	}
	groupName = new char[strlen(groupName) + 1];
	strcpy(groupName, group.groupName);
}

Group::~Group()
{
	delete[] groupName;
}

void Group::addStudent(Student* student)
{
	groupMembers.push_back(student);
}

void Group::setGroupName(char* gN)
{
	groupName = new char[strlen(gN) + 1];
	strcpy(groupName, gN);
}

void Group::showGroupData() 
{
	for (unsigned int i = 0; i < groupMembers.size(); i++)
	{
		groupMembers[i]->print();
	}
}
