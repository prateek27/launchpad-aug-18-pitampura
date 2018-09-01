#include<iostream>
using namespace std;


int main(){

	int x = 0;
	int y = 0;

	char ch;
	ch = cin.get();

	while(ch!='\n'){
		
		if(ch=='N'){
			y++;
		}
		else if(ch=='W'){
			x--;
		}
		else if(ch=='E'){
			x++;
		}
		else{
			y--;
		}

		ch = cin.get();
	}	

	cout<<x <<endl;
	cout<<y <<endl;

	//Print the string using loop over x and y 
	if(x>0 && y>0){
		while(x>0){
			cout<<"E";
			x = x - 1;
		}
		while(y--){
			cout<<"N";
		}

	}


	return 0;
}