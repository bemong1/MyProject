
template<typename T>
CalcMul<T>::CalcMul(T _num1, T _num2) : num1(_num1), num2(_num2)
{

};
	
template<typename T>
CalcMul<T>::~CalcMul()
{

};

template<typename T>
T CalcMul<T>::MulRun() 
{
	return num1 * num2;
};