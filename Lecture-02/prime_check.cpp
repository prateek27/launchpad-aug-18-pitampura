#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	int i=2;
	while(i<=n-1){
		if(n%i==0){
			cout<<"Not Prime";
			break;
			//return 0;
		}
		i = i + 1;
	}
	if(i==n){
		cout<<"Prime";
	}

	cout<<"I am at line 20!";

	return 0;
}