#include <iostream>
#include <string>
using namespace std;


#include "PosNum.h"

int main()
{
	
	try
	{
		PosNum liczba{ 3 };
		while (true)
		{
			--liczba;
			cout << liczba.getNum() << endl;
		}
	}
	catch(PosNum_bad_init ex2)
	{
		ex2.info();
	}
	catch (PosNum_bad_ass ex)
	{
		ex.info();
	}
	system("pause");
}