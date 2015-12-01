#include <iostream>

template<typename T>
class CalcSub
{
	
public:
	T num1;
	T num2;

public:	
	CalcSub(T _num1, T _num2);
	~CalcSub();

	T SubRun();
};

#include "CalcSub.hpp"