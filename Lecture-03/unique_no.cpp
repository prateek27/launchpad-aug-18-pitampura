#include<iostream>
using namespace std;


int main(){

	int XOR = 0;
	int i = 0;
	int N,no;
	cin>>N;

	while(i<N){
		cin>>no;
		XOR = XOR^no;
		i++;
	}

	cout<<XOR <<endl;


	return 0;
}