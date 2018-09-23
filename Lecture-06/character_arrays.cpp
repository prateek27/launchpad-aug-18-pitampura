#include<iostream>
using namespace std;


int main(){

		char a[] = {'a','b','c','d','e'}; //null is not stored

		char b[] = "Hello"; //String (automatically null terminated)

		cout<<sizeof(b) <<endl;
		cout<<b <<endl;

		cout<< a <<endl;

		

		return 0;
}