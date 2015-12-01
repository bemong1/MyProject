#include "Intergrate.h"

using namespace std;


int main()
{
	double a, b;	
	char oper;
	cin >> a >> oper >> b;	

	Intergrate intergrate(a, b, oper);

	cout << intergrate.Operation() << endl;

	return 0;

}