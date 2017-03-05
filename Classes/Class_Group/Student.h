#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <fstream>
#include <string>

using namespace std;

class Student
{
private:
	char* name;
	char* surname;
	char* group;
	int progMark;
	int adminMark;
	int designMark;

public:
	Student(char*, char*, char*, int, int, int);
	Student(const Student&);

	~Student();

	void setName(char*);
	void setSurname(char*);
	void setGroup(char*);
	void setProgMark(int);
	void setAdminMark(int);
	void setDesignMark(int);

	char getName();
	char getSurname();
	char getGroup();
	int getProgMark();
	int getAdminMark();
	int getDesignMark();

	void print();
	void input();

	void save(std::ostream&);
	void load(std::ifstream&);
};
#endif // !__STUDENT_H__
