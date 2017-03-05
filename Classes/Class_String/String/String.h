#ifndef __STRING_H__
#define __STRING_H__

class String
{
private:
	int size;
	char* str;

	void checkIndex(int);
public:
	String();
	String(String& string); // Copy constructor takes reference om itself as a param.
	String(char* c);
	String(char c);

	~String(); // Explicit destructor for dynamic memory

	char charAt(int);

	String& subString(int, int);
	String& subString(int);

	String& operator+=(const String&);
	String& operator=(const String&);
	bool operator==(String&);
	bool operator>(String&);
	bool operator<(String&);

	int getSize();

	char* toCharArray();
};

#endif // !__STRING_H__
