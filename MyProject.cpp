
#include "MyProject.h"


CalcAdd::CalcAdd(int _num1, int _num2)
{
	num1 = _num1;
	num2 = _num2;
}
CalcAdd::~CalcAdd()
{

}

int CalcAdd::AddRun()
{
	
	return num1+num2;
}
