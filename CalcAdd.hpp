
template<typename T>
CalcAdd<T>::CalcAdd(T _num1, T _num2) : num1(_num1), num2(_num2)
{

};
	
template<typename T>
CalcAdd<T>::~CalcAdd()
{

};

template<typename T>
T CalcAdd<T>::AddRun() 
{
	return num1 + num2;
};