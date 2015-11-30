#include <iostream>
#include <pthread.h>
#include <unistd.h>

#include "MyProject.h"

using namespace std;


void * thread_add1(void *)
{
	CalcAdd add(1, 0);
	while(1){
		cout<<add.AddRun()<<endl;
		//sleep(0.1);
	}
}

void * thread_add2(void *)
{
	CalcAdd add(2, 0);
	while(1){
		cout<<add.AddRun()<<endl;
		//sleep(0.1);
	}
}

void * thread_add3(void *)
{
	CalcAdd add(3, 0);
	while(1){
		cout<<add.AddRun()<<endl;
		//sleep(0.1);
	}
}


int main()
{
	pthread_t thread1;
	pthread_t thread2;
	pthread_t thread3;

	pthread_create(&thread1, 0, thread_add1, 0);
	pthread_create(&thread2, 0, thread_add2, 0);
	pthread_create(&thread3, 0, thread_add3, 0);

	char a;
	cin >> a;

	//int a = thread_add1();
	//cout << a << endl;

	return 0;

}