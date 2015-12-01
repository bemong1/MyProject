#include "CalcAdd.h"
#include "CalcSub.h"
#include "CalcMul.h"
#include "CalcDiv.h"

class Intergrate{

public:
	double num1;
	double num2;
	char oper;

public:
	Intergrate(double _num1, double _num2, char _oper);
	~Intergrate();

public:
	double Operation();

};