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

	int largest_sum = 0;
	int left = 0,right = 0;

	//Build Cumulative Sum Array
	int c[100];
	c[0] = a[0];

	for(int i=1;i<n;i++){
		c[i] = a[i] + c[i-1];
	}



	//First Part
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
				
				//Loop for Printing elements from i to j
				int s = i>0? c[j] - c[i-1] : c[j];
				//Check if sum is greater than largest sum
				if(s>largest_sum){
					largest_sum = s;
					left = i;
					right = j;
				}
		}
	}
		
	
	cout<<largest_sum<<endl;
	//Largest Subarray
	for(int k=left;k<=right;k++){
		cout<<a[k]<<" ";
	}


	return 0;
}