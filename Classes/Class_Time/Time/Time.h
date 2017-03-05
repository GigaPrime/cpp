#ifndef __TIME_H__
#define __TIME_H__

class PrimeTime
{
private:
	unsigned int seconds;
	unsigned int minutes;
	unsigned int hours;

	int toTotalSeconds();

public:
	PrimeTime();
	PrimeTime(PrimeTime& primeTime); //Copy constructor takes reference on itself as a param.
	PrimeTime(int h, int m, int s);

	int getSeconds();
	int getMinutes();
	int getHours();

	void setTime(int h, int m, int s);

	PrimeTime substruct(PrimeTime& primeTime);
	void inputTime();
};

#endif // !__TIME_H__
