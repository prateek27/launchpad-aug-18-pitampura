#include<iostream>
using namespace std;


int main(){

	char ch = 'A';
	cout<< ch <<endl;

	cout<< int(ch) << endl; //ASCII Value
	cout<< ch - '0' <<endl; // 5  

	//Print the ASCII Table (0-255)
	int i=0;

	while(i<=255){
		cout<<i<<" = "<<char(i)<<endl;
		i = i + 1;
	}

	return 0;
}