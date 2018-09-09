#include<iostream>
#include<cstring>
using namespace std;


int main(){

	char a[1000];

	cin.getline(a,1000,'.');
	cout<<strlen(a)<<endl;
	cout<<a <<endl;

	return 0;
}