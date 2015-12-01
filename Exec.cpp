
#include "CalcAdd.h"

using namespace std;


int main()
{
	double a, b;	
	cin >> a >> b;	

	CalcAdd<double> calcadd(a, b);

	double result;
	result = calcadd.AddRun();
	cout << result << endl;

	return 0;

}