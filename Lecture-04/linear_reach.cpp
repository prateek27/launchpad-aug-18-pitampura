#include<iostream>
using namespace std;


int main(){

	//Read N Numbers 
	//Print all possible pairs that you can make
	int n;
	cin>>n;

	int a[100];
	//Input
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cin>>key;
	//Linear Search
	int i;
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Present at "<<i<<endl;
			break;
		}
	}
	if(i==n)
		cout<<"Not Present";

	return 0;
}