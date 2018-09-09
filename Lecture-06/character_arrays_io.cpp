#include<iostream>
using namespace std;


int main(){

		char a[100];

		char ch = cin.get();
		int i=0;
		while(ch!='.'){
			a[i] = ch;
			i++;
			ch = cin.get();
		}
		a[i] = '\0';

		//Output the entire array
		cout<< a ;

		

		return 0;
}