#include<iostream>
using namespace std;


int main(){

	// ++ Post/Pre Increment

	int a = 10;
	++a; //Same as a = a + 1 
	a++; //Same as a = a + 1


	cout<<a++ <<
	endl; //10 Post
	cout<< ++a <<endl; //12 Pre
	//Compount Assignment Operator

	a += 1;
	a *= 5;
	a %= 2; // a = a%2;
	a /= 2; // a = a/2;

	a = -2;


	// --Post/Pre Decrement


	//Ternatory Operator ? : 

	5>0 ? cout<<"Greater" : cout<<"lesser";

	int x;
	cin>>x;

	x%2==0 ? cout<<"Even" : cout<<"Odd";

	//Ternary + Assignment 

	int y = x%2 ? x/2 : x*x;
	cout<< y <<endl;




	return 0;
}