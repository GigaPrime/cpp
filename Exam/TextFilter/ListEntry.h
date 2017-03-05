#ifndef __LISTENTRY_H__
#define __LISTENTRY_H__

#include <string>
using namespace std;

enum SelectionType
{
	HIGHLIGHTED, SELECTED, BOTH, NONE
};

class ListEntry
{
private:
	string text;
	SelectionType selectionType;
public:
	ListEntry(string& text);

	string& getText();
	SelectionType getSelectionType();
	void SetSelectionType(SelectionType selectionType);
};


#endif // !__LISTENTRY_H__

