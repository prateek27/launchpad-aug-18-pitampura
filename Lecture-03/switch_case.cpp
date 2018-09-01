#include<iostream>
using namespace std;


int main(){

	char ch;
	cin>>ch;

	switch(ch){

		case 'm' :
		case 'M' : cout<<"Monday";
					break;

		case 's' :
		case 'S' : cout<<"Saturday";
					cout<<"Coding Class";
					break;

		default : cout<<"Something else";
	}


	return 0;
}