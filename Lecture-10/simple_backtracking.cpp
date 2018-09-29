#include<iostream>
using namespace std;

void fun(int *a,int i,int n){
	if(i==n){
		//Print the array and return
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		return;
	}
	//otherwise
	a[i] = i*i;
	fun(a,i+1,n);
	//Backtracking
	a[i] = 1;
	return;
}

int main(){

	int a[10] = {0};
	int n = 10;
	fun(a,0,n);

	//Main 
	cout<<"In Main";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

return 0;
}