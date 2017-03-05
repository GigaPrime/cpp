#include <vector>
#include <string>

#include "ListComponent.h"

ListComponent::ListComponent(COORD position, vector<string>& inputElements):UIComponent(position)
{
	for (int i = 0; i < inputElements.size(); ++i)
	{
		elements.push_back(ListEntry(inputElements[i]));
	}
}

void ListComponent::render()
{

}

void ListComponent::scrollUp()
{
	if (currentHighlightedElement > 0)
		currentHighlightedElement--;
}

void ListComponent::scrollDown()
{
	if (currentHighlightedElement < elements.size() - 1)
		currentHighlightedElement++;
}