#include<iostream>
using namespace std;

//Write one function to check if a no is prime
// Write another function to print all primes between a and b (input)
//Main

bool checkPrime(int n){

	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int printPrimes(int a,int b){
	//Print all primes
	for(int n=a;n<=b;n++){
		if(checkPrime(n)){
			cout<<n<<" ";
		}
	}
}

void getDivisors(int n){

	int i;
	for(i=1;i*i<n;i++){
		if(n%i==0){
			cout<<i<<","<<n/i<<endl;
		}
	}
	if(i*i==n){
		cout<<i<<endl;
	}

}

int main(){
	int a,b;
	//cin>>a>>b;
	//printPrimes(a,b);
	cin>>a;
	getDivisors(a);
	return 0;
}
