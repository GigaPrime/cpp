#ifndef __GROUP_H__
#define __GROUP_H__
#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;

class Group
{
private:
	vector<Student*> groupMembers;
	char* groupName;

public:
	Group();
	Group(vector<Student*>, char*);
	Group(const Group&);

	~Group();

	void addStudent(Student*);
	void setGroupName(char*);
	void showGroupData();
};

#endif // !__GROUP_H__

