#include<iostream>
using namespace std;

void fun(int *b){

		cout<<b[0] <<endl;
		b[1] = 30;
		cout<<b[1] <<endl;
		cout<<b[2] <<endl;

		cout<<"Size of a :"<<sizeof(b) <<endl;

}


int main(){

	int a[100] = {1,2,3} ;
	cout<< a <<endl;
	cout<< a[0] <<endl;
	cout<< *(a+1) <<endl; //same as a[1]
	cout<< (a+1) <<endl; // same as &a[1]

	fun(a);
	cout<<"In Main Size of Array :"<<sizeof(a) <<endl;
	cout<<a[1] <<endl;

	return 0;
}