#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void test_get_s();
void test_strcpy();
void test_strcpy_s();

void main()
{
	test_get_s(); // string input test
	test_strcpy(); // string copy test
	test_strcpy_s(); // string to string copy test
}


// string input test
void test_get_s()
{
	char str[80];
	cout << "Enter string here: ";
	gets_s(str);

	cout << "Here's your string: " << str << endl;
	cout << "String lenght is: " << strlen(str) << endl;
}

// string copy test
void test_strcpy()
{
	char to_str[80];
	strcpy(to_str, "Hello!");
	cout << to_str << endl;
}

// string to string copy test
void test_strcpy_s()
{
	char from_srt[80], to_str[80];
	cout << "Enter string here: ";
	gets_s(from_srt);
	
	strcpy_s(to_str, from_srt);
	cout << "Here's your string: " << to_str << endl;
}