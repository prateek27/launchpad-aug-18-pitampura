#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	int sum = 0;
	for(  ;n>0; n = n/10 )
		sum += (n%10);

	
	cout<<sum;


}