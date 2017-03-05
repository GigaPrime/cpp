#ifndef __MANAGER_H__
#define __MANAGER_H__

#include <vector>
#include <string>
#include "Engine.h"
#include "FileReader.h"

using namespace std;

class FilterManager
{
private:
	vector<Filter&> vectorOfFilters;
public:
	void addFilter(Filter&);
	string doFilter(string&);

};

#endif // !__MANAGER_H__
