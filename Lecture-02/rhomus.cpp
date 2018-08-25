#include<iostream>
using namespace std;



int main(){
	int n;
	cin>>n;
	//Upper Half 1...n
	int i=1,j,val;
	while(i<=n){
		//Spaces	
		j=1;
		while(j<=n-i){
			cout<<" ";
			j = j + 1;
		}
		//Inc Numbers
		val = i;
		j=1;
		while(j<=i){
			cout<<val<<' ';
			val = val + 1;
			j = j + 1;

		}
		//Dec Order
		j=1;
		val = val - 2;
		while(j<=i-1){
			cout<<val<<' ';
			val = val - 1;
			j = j + 1;
		}

		//Shift to new line
		cout<<endl;
		i = i + 1;
	}

	//Lower Half n-1....1
	i=n-1;
	while(i>=1){
		//Spaces	
		j=1;
		while(j<=n-i){
			cout<<" ";
			j = j + 1;
		}
		//Inc Numbers
		val = i;
		j=1;
		while(j<=i){
			cout<<val<<' ';
			val = val + 1;
			j = j + 1;

		}
		//Dec Order
		j=1;
		val = val - 2;
		while(j<=i-1){
			cout<<val<<' ';
			val = val - 1;
			j = j + 1;
		}

		//Shift to new line
		cout<<endl;
		i = i - 1;
	}


	return 0;
}