#include<iostream>
using namespace std;


int main(){

	int a[] = {5,4,1,3,2};
	int n = 5;

	//Bubble Sort
	for(int i=0;i<=n-2;i++){

		//Pairwise Comparison
		for(int j=0;j<=n-2;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}

	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}


	return 0;
}