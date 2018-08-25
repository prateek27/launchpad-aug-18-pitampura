#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	int i,j;
	i=1;
	while(i<=n){

		//Spaces
		j=1;
		while(j<=n-i){
			cout<<" ";
			j = j + 1;
		}
		//Stars
		j=1;
		while(j<=2*i-1){
			cout<<"*";
			j = j + 1;
		}

		//Shift to new line
		cout<<endl;
		i  = i + 1;
	}

	
	//Lower Part
	i = n-1;
	while(i>=1){
		//Spaces
		j = 1;
		while(j<=n-i){
			cout<<" ";
			j = j + 1;
		}
		//Stars
		j=1;
		while(j<=2*i-1){
			cout<<"*";
			j = j + 1;
		}

		cout<<endl;
		i = i - 1;
	}


	return 0;
}