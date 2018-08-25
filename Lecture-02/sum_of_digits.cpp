#include<iostream>
using namespace std;


int main(){
	//Program to Compute Sum of Digits of Number N
	int n,sum=0;
	cin>>n;

	while(n>0){
		int last_digit = n%10;
		sum = sum + last_digit;
		n = n/10;
	}

	cout<<sum;

	return 0;
}