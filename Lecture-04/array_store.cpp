#include<iostream>
using namespace std;


int main(){

	//Read N Numbers Print them in reverse order
	//Constraint : N<=1000
	int a[1000];

	int n;
	cin>>n;

	//Read N Numbers
	for(int i=0;i<n;i++){
		cin>> a[i];
	}

	//Reverse Order
	for(int i=n-1;i>=0;i--){
		cout<<a[i]<<endl;
	}

	return 0;
}