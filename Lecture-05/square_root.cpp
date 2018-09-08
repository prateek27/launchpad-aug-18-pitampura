#include<iostream>
using namespace std;

int power(int a,int b){
	//HW
}

float squareRoot(int n,int p){

	float i = 0;
	float inc = 1;

	for(int times=0;times<=p;times++){

		for( ;i*i<=n;i+=inc){
		}
		i = i - inc;
		inc = inc/10;
	}

	return i;
}

int main(){

	int n,p;
	cin>>n>>p;
	cout<<squareRoot(n,p)<<endl;

	return 0;
}