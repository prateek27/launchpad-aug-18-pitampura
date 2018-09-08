#include<iostream>
using namespace std;

//Pass by Value
void increment(int a){
	a = a + 1;
	cout<<"Inside Increment"<<a<<endl;
	return;
}
//Pass by Reference(Easiest)
void increment2(int &b){
	b = b + 1;
}

//Pass by Reference Using Pointers
void increment3(int *ptr){
	*ptr = *ptr  + 1;
}


int main(){

	int a = 10;
	//increment2(a);
	increment3(&a);
	cout<<"In Main ";
	cout<<a<<endl;


	return 0;
}