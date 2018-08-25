#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	int i,j;
	i=1;
	while(i<=n){

		//Print i stars in ith row
		j=1;
		while(j<=i){
			cout<<'*';
			j = j + 1;
		}

		cout<<endl;
		i = i+1;
	}



	return 0;
}