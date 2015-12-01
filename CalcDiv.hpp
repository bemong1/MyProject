
template<typename T>
CalcDiv<T>::CalcDiv(T _num1, T _num2) : num1(_num1), num2(_num2)
{

};
	
template<typename T>
CalcDiv<T>::~CalcDiv()
{

};

template<typename T>
T CalcDiv<T>::DivRun() 
{
	if(num2 == 0){
		std::cout<<"err"<<std::endl;
		return 0;
	}
	return num1 / num2;
};