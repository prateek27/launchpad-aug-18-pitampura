#include<iostream>
using namespace std;


int main(){

	int a[] = {5,4,1,3,2};
	int n = 5;

	for(int i=0;i<=n-2;i++){
		//Find the smallest element in the remaining part
		int sindex=i;
		for(int j=i+1;j<=n-1;j++){
			if(a[j]<a[sindex]){
				sindex = j;
			}
		}
		swap(a[i],a[sindex]);
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}


	return 0;
}