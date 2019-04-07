#include "PosNum.h"
#include <iostream>
using namespace std;

PosNum_bad_init::PosNum_bad_init(double wrongValue_) : wrongValue{ wrongValue_ }
{
}

void PosNum_bad_init::info()
{
	cout << "Bad initialization error: can't initialize PosNum object with " << wrongValue << " value." << endl;
}


PosNum_bad_ass::PosNum_bad_ass(double wrongValue_) : wrongValue{ wrongValue_ }
{
}

void PosNum_bad_ass::info()
{
	cout << "Bad assignment error: can't assign value " << wrongValue << " to PosNum object." << endl;
}


PosNum::PosNum(double initValue)
{
	if (initValue < 0) throw PosNum_bad_init{ initValue };
	number = initValue;
}

PosNum & PosNum::operator=(double valueToAssign)
{
	if (valueToAssign < 0) throw PosNum_bad_ass{ valueToAssign };
	number = valueToAssign;
	return *this;
}

void PosNum::operator--()
{
	double newValue = number - 1;
	if (newValue < 0) throw PosNum_bad_ass{ newValue };
	number = newValue;
}

double PosNum::getNum()
{
	return number;
}

PosNum::~PosNum()
{
}