
#include "CalcAdd.h"

using namespace std;


int main()
{

	int a = 4;
	int b = 5;

	CalcAdd<int> calcadd(3, 4);

	int result;
	result = calcadd.AddRun();
	cout << result << endl;

	return 0;

}