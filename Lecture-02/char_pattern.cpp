#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	int i=1;
	while(i<=n){

		char val = 'A';
		int j = 1;
		while(j<=n-i+1){
			cout<<val;
			val = val + 1;
			j = j + 1;
		}

		val = val - 1;
		j = 1;
		while(j<=n-i+1){
			cout<<val;
			val = val - 1;
			j = j + 1;
		}
		cout<<endl;
		i = i + 1;
	}


	return 0;
}