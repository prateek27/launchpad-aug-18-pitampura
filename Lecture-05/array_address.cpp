#include<iostream>
using namespace std;




int main(){

	int a[100] = {1,2,3} ;
	cout<< a <<endl;
	cout<< &a[0] <<endl;

	int *b = a;
	int *c = &a[0];
	int *d;

	*c = 100;

	b = a+5;
	d = (a+1);

	cout<< b<<endl;
	cout<< c<<endl;

	cout<< d <<endl;
	cout<< a + 1 <<endl;
	cout<< &a[1] <<endl;
	cout<< *(a+1) <<endl;
	cout<< a[1] <<endl;
	return 0;
}