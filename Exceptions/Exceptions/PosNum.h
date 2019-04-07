#pragma once
#include <exception>

class PosNum_bad_init
{
public:
	PosNum_bad_init(double wrongValue_);
	void info();
private:
	double wrongValue;
};

class PosNum_bad_ass
{
public:
	PosNum_bad_ass(double wrongValue_);
	void info();
private:
	double wrongValue;
};

class PosNum
{
public:
	PosNum(double initValue = 0);
	PosNum & operator=(double valueToAssign);
	void operator--();
	double getNum();
	~PosNum();
private:
	double number;
};