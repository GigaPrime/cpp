#include <iostream>
#include <string>
#include "String.h"
using namespace std;

void String::checkIndex(int index)
{
	if (index < 0 || index >= size)
	{
		throw "ArrayIndexOutOfBoundsException";
	}
}

String::String() 
{
	size = 0;
	str = new char[size + 1];
	strcpy(str, "");
}

String::String(String& string)
{
	size = string.size;
	str = new char[size + 1];
	strcpy(str, string.str);
}

String::String(char* c)
{
	size = strlen(c);
	str = new char[size + 1];
	strcpy(str, c);
}

String::String(char c)
{
	size = 1;
	str = new char[size + 1];
	str[0] = c;
	str[1] = '\0';
}

String::~String()
{
	delete[] str;
}

char String::charAt(int index)
{
	checkIndex(index);
	return str[index];
}

String& String::subString(int startIndex, int endIndex)
{
	checkIndex(startIndex);
	checkIndex(endIndex);

	if (startIndex > endIndex)
	{
		throw "StartIndexGreaterThanEndIndexException";
	}
	else if (startIndex < endIndex)
	{
		return String(strncpy(0, str + startIndex, endIndex - startIndex));
	}
	else
	{
		return String(str[startIndex]);
	}
}

String& String::subString(int endIndex)
{
	return subString(0, endIndex);
}


String& String::operator+=(const String& string)
{
	char*tmpString = str;
	str = new char[strlen(str) + strlen(string.str) + 1];
	strcpy(str, tmpString);
	strcat(str, string.str);

	return *this;
}

String& String::operator=(const String& string)
{
	if (this == &string)
		return *this;
	if (string.str != nullptr)
	{
		str = new char[strlen(string.str) + 1];
		strcpy(str, string.str);
	}
	else
		str = nullptr;
	
	return *this;
}

bool String::operator==(String& string)
{
	return strcmp(str, string.str) == 0;
}

bool String::operator>(String& string)
{
	return strcmp(str, string.str) > 0;
}

bool String::operator<(String& string)
{
	return strcmp(str, string.str) < 0;
}

char* String::toCharArray()
{
	return str;
}

int String::getSize()
{
	return size;
}
