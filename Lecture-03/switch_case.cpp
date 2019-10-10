#include<iostream>
using namespace std;


int main(){

	char ch; 
	cin>>ch; // taking input of character manually

	switch(ch){

		case 'm' :                 //if this comes then  output of M get printed as there is no break

		case 'M' : cout<<"Monday";   //if M comes then Monday print 
		break;       // due to break switch loops ends

		case 's' :     // if s comes then S is printed as this case has no break statement
		case 'S' : cout<<"Saturday"; 
					cout<<"Coding Class";
					break;

		default : cout<<"Something else"; /* if other (val of ch)option comes then default val get printed*/
	}


	return 0;
}