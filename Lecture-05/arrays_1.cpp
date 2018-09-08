#include<iostream>
using namespace std;

//Write a function which gives all pairs in the sorted array which sum to k
void printPairs(int a[],int n,int k){

	int i=0;
	int j = n-1;

	while(i<j){
		if(a[i]+a[j] == k){
			cout<<a[i]<<","<<a[j]<<endl;
			i++;
			j--;
		}
		else if(a[i]+a[j]<k){
			i++;
		}
		else{
			j--;
		}
	}

}

int main(){

	int n;
	int a[100];
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int k;
	cin>>k;

	printPairs(a,n,k);

}