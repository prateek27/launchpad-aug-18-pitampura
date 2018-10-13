#include <iostream>
#include <cstring>
using namespace std;

int wineYear(int *arr, int si, int ei, int year) {
	if(si>ei) {
		return 0;
	}
	int result_from_front = arr[si] *year + wineYear(arr, si+1, ei, year+1);
	int result_from_end = arr[ei] *year + wineYear(arr, si, ei - 1, year+1);
	return max(result_from_end, result_from_front);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<wineYear(arr, 0, n-1, 1)<<endl;
	return 0;
}
// happy coding
//practice ds and algo
