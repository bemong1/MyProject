#include <iostream>

template<typename T>
class CalcDiv
{
	
public:
	T num1;
	T num2;

public:	
	CalcDiv(T _num1, T _num2);
	~CalcDiv();

	T DivRun();
};

#include "CalcDiv.hpp"