#include<iostream>
using namespace std;


bool Left[30] = {0};
bool Right[30] = {0};
bool col[30] = {0};

void solveNQueen(int i,int n,int board[][10]){
	//Base Case
	if(i==n){
		//Print the board
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<(board[i][j]?'Q':'.');
			}
			cout<<endl;
		}
		cout<<endl;
		return;
	}
	for(int j=0;j<n;j++){
		if(col[j]==0 && Left[j-i+n-1]==0 && Right[i+j]==0){
			board[i][j] = 1;
			col[j] = Left[j-i+n-1] = Right[i+j] = true;
			solveNQueen(i+1,n,board);
			//Backtracking
			board[i][j] = 0;
			col[j] = Left[j-i+n-1] = Right[i+j] = false;
		}

	}
	return;
}


int main(){
	int board[10][10] = {0};
	int n;
	cin>>n;

	solveNQueen(0,n,board);



	return 0;
}