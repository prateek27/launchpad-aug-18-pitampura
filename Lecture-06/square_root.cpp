#include<iostream>
using namespace std;


int squareRoot(int n){
		int s = 0;
		int e = n;

		int mid;
		int ans = 0;
		while(s<=e){
			mid = (s+e)/2;
			
			if(mid*mid==n){
				return mid;
			}
			else if(mid*mid <n){
				ans = mid;
				s  = mid + 1;
			}
			else{
				e = mid-1;
			}

		}
		return ans;
}


int main(){

	int n;
	cin>>n;

	cout<<squareRoot(n)<<endl;


	return 0;
}