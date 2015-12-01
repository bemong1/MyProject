#include <iostream>

template<typename T>
class CalcMul
{
	
public:
	T num1;
	T num2;

public:	
	CalcMul(T _num1, T _num2);
	~CalcMul();

	T MulRun();
};

#include "CalcMul.hpp"