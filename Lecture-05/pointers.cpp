#include<iostream>
using namespace std;


int main(){

	int x = 10;
	char c = 'A';

	int *ptr = &x;
	char*ptr2 = &c;

	cout<<sizeof(x)<<endl;
	cout<<sizeof(c) <<endl;
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(ptr2)<<endl;

	cout<< ptr <<endl;
	cout<< (void *)ptr2 <<endl;
	//Explict Typecasting to void* so that cout treats char address as address
	cout<<sizeof(void *)<<endl;


	void* p = &x;
	cout<< p ;

	p = &c;
	cout<< p <<endl;

	return 0;
}