#include<iostream>
using namespace std;

int* createArray(int n){
	int *a = new int[n];
	return a;
}

int main(){

	int *b = createArray(10);


	return 0;
}