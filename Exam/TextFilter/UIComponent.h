#ifndef __UIComponent_H__
#define __UIComponent_H__

#include <windows.h>

class UIComponent
{
protected:
	COORD position;
	COORD size;
	
public:
	UIComponent(COORD position)
	{
		this->position = position;
	}
	virtual void render() = 0;
};

#endif // !__UIComponent_H__
