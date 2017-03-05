#ifndef __LISTCOMPONENT_H__
#define __LISTCOMPONENT_H__
#include <vector>
#include <string>
#include "UIComponent.h"
#include "ListEntry.h"
using namespace std;

class ListComponent : UIComponent
{
private:
	int visibleElements = 5;
	int currentHighlightedElement;
	vector<ListEntry>& elements = vector<ListEntry>();

public:
	ListComponent(COORD position, vector<string>& inputElements);
	
	void scrollUp();
	void scrollDown();
	virtual void render();
};

#endif // !__LISTCOMPONENT_H__
