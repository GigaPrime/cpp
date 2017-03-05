#include "FileReader.h"

string FileReader::load()
{
	ifstream text("text.txt");
	stringstream buffer;
	buffer << text.rdbuf();
	return buffer.str;
}