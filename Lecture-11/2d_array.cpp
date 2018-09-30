#include<iostream>
using namespace std;

int** createArray(int m,int n){
	int **a = new int*[m];

	for(int i=0;i<m;i++){
		a[i] = new int[n];
	}

	//put some value
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j] = i+j;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	//Delete the 2d array
	for(int i=0;i<m;i++){
		delete [] a[i];
	}
	delete [] a;
	cout<<a<<endl;
	return a;
}

int main(){
	
	int m,n;
	cin>>m>>n;
	int **b = createArray(m,n);
	cout<<b<<endl;


	return 0;
}