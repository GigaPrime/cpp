#include <iostream>
using namespace std;

#include "Time.h"

void showTime(PrimeTime& primeTime);

int main()
{
	PrimeTime time1(3, 4, 5);
	time1.setTime(10, 20, 30);

	PrimeTime time2; 
	time2.inputTime();

	PrimeTime time3 = time1.substruct(time2);
	//PrimeTime time3 = PrimeTime(3, 4, 5).substruct(PrimeTime(1, 2, 3)); // Brain explosion approach!!!

	showTime(time1); // Copy constructor because of object as function param.
	showTime(time2); //
	showTime(time3); //

	return 0;
}

void showTime(PrimeTime& primeTime)
{
	cout << primeTime.getHours() << ":" << primeTime.getMinutes() << ":" << primeTime.getSeconds() << endl;
}