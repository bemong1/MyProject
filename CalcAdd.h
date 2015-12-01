#include <iostream>

template<typename T>
class CalcAdd
{
	
public:
	T num1;
	T num2;

public:	
	CalcAdd(T _num1, T _num2);
	~CalcAdd();

	T AddRun();
};

#include "CalcAdd.hpp"