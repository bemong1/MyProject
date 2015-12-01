
template<typename T>
CalcSub<T>::CalcSub(T _num1, T _num2) : num1(_num1), num2(_num2)
{

};
	
template<typename T>
CalcSub<T>::~CalcSub()
{

};

template<typename T>
T CalcSub<T>::SubRun() 
{
	return num1 - num2;
};