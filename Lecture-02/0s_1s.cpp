#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	int i,j;
	i=1;
	while(i<=n){

		int val = (i%2); 
		//Print i stars in ith row
		j=1;
		while(j<=i){
			cout<<val;
			val = 1 -val;
			j = j + 1;
		}

		cout<<endl;
		i = i+1;
	}


	return 0;
}