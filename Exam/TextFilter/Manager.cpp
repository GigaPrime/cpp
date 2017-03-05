#include <iostream>
#include <conio.h>
#include "Manager.h"

using namespace std;

void FilterManager::addFilter(Filter& filter)
{
	vectorOfFilters.push_back(filter);
}

string FilterManager::doFilter(string& text)
{
	FileReader file;
	file.load();


	return;
}