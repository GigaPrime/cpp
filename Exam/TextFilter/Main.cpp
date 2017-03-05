#include <iostream>
#include "ListComponent.h"
#include "Engine.h"
using namespace std;

int main()
{
	vector<string> strs = vector<string>();

	strs.push_back("Mouse");
	strs.push_back("Hannah");
	strs.push_back("Olga");
	strs.push_back("HugeTitsOlga");
	strs.push_back("Inna");
	strs.push_back("Chokolate");
	strs.push_back("Vika");
	strs.push_back("Tanya");
	strs.push_back("Katya");
	strs.push_back("FitKatya");

	ListComponent lc = ListComponent({0,0}, strs);
	lc.render();

	char a, b;
	cout << "input letters: ";
	cin >> a;
	cout << "input letters: ";
	cin >> b;
	swapSymbols(a, b);
	cout << a << b;

	return 0;
}