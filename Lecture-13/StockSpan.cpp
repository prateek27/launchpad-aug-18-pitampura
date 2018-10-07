#include <iostream>
#include <stack>
using namespace std;

void StockSpan(int *arr, int n) {

	stack<int> st;
	int output[n];
	output[0] = 1;
	st.push(0);
	for(int i=1;i<n;i++) {
		while(!st.empty() and arr[i]>=arr[st.top()]) {
			st.pop();
		}
		output[i] = (st.empty())?(i+1):(i-st.top());
		st.push(i);

	}
	for(int i=0;i<n;i++) {
		cout<<output[i]<<endl;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	StockSpan(arr, n);
	return 0;
}
