#include<iostream>
using namespace std;


int main(){

	int a[100] = {0} ; //Create + initialise

	for(int i=0;i<100;i++){
		cout<<a[i]<<endl;
	}

	a[8] = 90; //Update a particular cell

	cout<< a[7]; //Read/Print a particular cell

	int b[] = {7,8,9,10};

	//Size of Operator
	cout<<sizeof(b)<<endl;
	cout<<sizeof(int)<<endl;

	int x;
	cout<<sizeof(x)<<endl;

	cout<< sizeof(b)/sizeof(b[0]);

	cout<<sizeof(long long int); //8 bytes



	return 0;
}