#include<iostream>
using namespace std;

int Factorial(int n); //Forward Declaration

int binCoeff(int n,int r){
	return Factorial(n)/(Factorial(n-r)*Factorial(r));
}

void Pascal(int n){
	//n : no of rows

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<binCoeff(i,j)<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	Pascal(n);
	return 0;
}

int Factorial(int n){

	int ans=1;
	for(int i=1;i<=n;i++){
		ans = ans*i;
	}
	return ans;
}
