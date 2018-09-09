#include<iostream>
using namespace std;

int binarySearch(int *a,int s,int e,int key){

		while(s<=e){
			int m = (s+e)/2;
			if(a[m]==key){
					return m;
			}
			else if(a[m]>key){
				e = m - 1;
			}
			else{
				s = m + 1;
			}
		}
		return -1;
}

//Binary Search
int main(){
	int a[]  = {1,2,2,2,2,3,4,5,8,10,20,24};
	int n = sizeof(a)/sizeof(a[0]);

	cout<<"Array : ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	cout<<endl;
	cout<<"Index : ";
	for(int i=0;i<n;i++){
		cout<<i<<",";
	}

	int key;
	cin>>key;
	cout<<binarySearch(a,0,n-1,key)<<endl;

	return 0;

}