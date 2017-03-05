#ifndef __ENGINE_H__
#define __ENGINE_H__

//chars swap function
template <typename SwapEngine> void swapSymbols(SwapEngine &a, SwapEngine &b);

class Filter
{
private:
	bool active;

public:
	Filter(bool active);

	void activate();
	void deactivate();
	bool isActive() const;

	virtual bool applyFilter(char) = 0;
};

class DigitFilter : public Filter
{
public:
	virtual bool applyFilter(char);
};

class LatinLowerFilter : public Filter
{
public:
	virtual bool applyFilter(char);
};

class LatinUpperFilter : public Filter
{
public:
	virtual bool applyFilter(char);
};

class PunctFilter : public Filter
{
public:
	virtual bool applyFilter(char);
};

#endif  __ENGINE_H__// !


