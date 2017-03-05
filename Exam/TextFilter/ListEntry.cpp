#include "ListEntry.h"

ListEntry::ListEntry (string& text)
{
	this->text = text;
	this->selectionType = NONE;
}

string& ListEntry::getText()
{
	return text;
}

SelectionType ListEntry::getSelectionType()
{
	return selectionType;
}

void ListEntry::SetSelectionType(SelectionType selectionType)
{
	this->selectionType = selectionType;
}
