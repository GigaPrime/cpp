#include "Time.h"
#include <iostream>

PrimeTime::PrimeTime()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}

PrimeTime::PrimeTime(PrimeTime& primeTime)
{
	hours = primeTime.hours;
	minutes = primeTime.minutes;
	seconds = primeTime.seconds;

	std::cout << "Copy constructor called with arguments: " << hours << ":" << minutes << ":" << seconds << std::endl;
}

PrimeTime::PrimeTime(int h, int m, int s)
{
	hours = h;
	minutes = m;
	seconds = s;
}

int PrimeTime::getSeconds()
{
	return seconds;
}

int PrimeTime::getMinutes()
{
	return minutes;
}

int PrimeTime::getHours()
{
	return hours;
}

void PrimeTime::setTime(int h, int m, int s)
{
	hours = h;
	minutes = m;
	seconds = s;
}

int PrimeTime::toTotalSeconds()
{
	return hours * 3600 + minutes * 60 + seconds;
}

PrimeTime PrimeTime::substruct(PrimeTime& primeTime)
{
	int resultTotalSeconds = toTotalSeconds() - primeTime.toTotalSeconds();

	int h = resultTotalSeconds / 3600;
	int m = (resultTotalSeconds - h * 3600) / 60;
	int s = resultTotalSeconds % 60;

	return PrimeTime(h, m, s);
}

void PrimeTime::inputTime()
{
	std::cout << "Enter hours: ";
	std::cin >> hours;
	std::cout << "Enter minutes: ";
	std::cin >> minutes; 
	std::cout << "Enter seconds: ";
	std::cin >> seconds;
}
