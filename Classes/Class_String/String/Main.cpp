#include <iostream>
using namespace std;
#include "String.h"

int main()
{
	String string1 = String();
	
	cout << string1.toCharArray() << endl;
	cout << string1.getSize() << endl;

	String string2("GigaPrime");

	cout << string2.toCharArray() << endl;
	cout << string2.getSize() << endl;

	String string3 = string2;

	cout << string3.toCharArray() << endl;
	cout << string3.getSize() << endl;

	//----------- operator== -----------//

	String str1("GigaPrime");
	String str2("GagaPrime");

	cout << str1.toCharArray() << " == " << str2.toCharArray() << " is " << (str1 == str2? "true" : "false") << endl;

	//----------- operator+= -----------//
	
	String st1("ABC");
	String st2("DEF");
	
	st1 += (st2);
	
	cout << st1.toCharArray() << endl;
	cout << "New string size is: " << st1.getSize() << endl;

	//------------ operator= ------------//
	String st3("Previous string");
	String st4("New string");
	st3 = (st4);

	cout << st3.toCharArray() << endl;

	return 0;
}