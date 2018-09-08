#include<iostream>
using namespace std;

int square(int n){
	int sq = n*n;
	return sq;
}
//Factorial 
int Factorial(int n){

	int ans=1;
	for(int i=1;i<=n;i++){
		ans = ans*i;
	}
	return ans;
}

//Function Declaration + Definition
void fun(){
	cout<<"Hello World!";
}

int main(){

	/*
	cout<< square(5); //Function Call
	
	fun(); //Function Call

	fun();
	*/
	int no;
	cin>>no;
	cout<<Factorial(no)<<endl; //Function Call

	return 0;
}