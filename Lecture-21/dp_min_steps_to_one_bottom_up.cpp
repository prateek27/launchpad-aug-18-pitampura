#include<iostream>
using namespace std;

int wines(int dp[][10],int prices[],int s,int e,int y){
	if(s>e){
		return 0;
	}
	if(dp[s][e]!=0){
		return dp[s][e]; //To avoid overlapping subproblems
	}

	int op1 = y*prices[s] + wines(dp,prices,s+1,e,y+1);
	int op2 = y*prices[e] + wines(dp,prices,s,e-1,y+1);
	dp[s][e] = max(op1,op2);
	return dp[s][e];

}

int main(){

	int a[ ] = {3,5,2};
	int n  = 3;
	int dp[10][10] = {0};

	cout<<wines(dp,a,0,n-1,1)<<endl;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;
}