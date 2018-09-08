#include<iostream>
using namespace std;


int main(){

	//Read N Numbers 
	//Print all possible pairs that you can make


	int n;
	cin>>n;

	int a[100];
	//Input
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//First Part
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			cout<<"("<<i<<","<<j<<") ";
		}
		cout<<endl;
	}
		
	cout<<endl;

	//Second Part - Array Pairs
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<=n-1;j++){
			cout<<"("<<a[i]<<","<<a[j]<<") ";
		}
		cout<<endl;
	}



	return 0;
}