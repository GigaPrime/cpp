#include "Engine.h"

using namespace std;

template <typename SwapEngine> void swapSymbols(SwapEngine &a, SwapEngine &b)
{
	SwapEngine temp;
	temp = a;
	a = b;
	b = temp;
}

Filter::Filter(bool active = false) : active(active)
{

}

void Filter::activate()
{
	active = true;
}

void Filter::deactivate()
{
	active = false;
}

bool Filter::isActive() const
{
	return active;
}

bool DigitFilter::applyFilter(char ch)
{
	return (ch >= 0 && ch <= 9);
}

bool LatinLowerFilter::applyFilter(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

bool LatinUpperFilter::applyFilter(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

bool PunctFilter::applyFilter(char ch)
{
	return (ch >= char(33) && ch <= char(34) && 
			ch >= char(39) && ch <= char(42) &&
			ch >= char(44) && ch <= char(47) &&
			ch >= char(58) && ch >= char(59));
}
