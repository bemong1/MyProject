#include "Intergrate.h"

Intergrate::Intergrate(double _num1, double _num2, char _oper) 
: num1(_num1), num2(_num2), oper(_oper)
{

}

Intergrate::~Intergrate() 
{

}

double Intergrate::Operation()
{
	double result;

	if (oper == '+'){
		CalcAdd<double> calcAdd(num1, num2);
		double result_Add;
		result = calcAdd.AddRun();
	}

	else if (oper == '-'){
		CalcSub<double> calcSub(num1, num2);
		double result_Sub;
		result = calcSub.SubRun();
	}

	else if (oper == '*'){
		CalcMul<double> calcMul(num1, num2);
		double result_Mul;
		result = calcMul.MulRun();
	}

	else if (oper == '/'){
		CalcDiv<double> calcDiv(num1, num2);
		double result_Div;
		result = calcDiv.DivRun();
	}

	else{
		std::cout<<"err"<<std::endl;
		return 0;
	}

	return result;

}