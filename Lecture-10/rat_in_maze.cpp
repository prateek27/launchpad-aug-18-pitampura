#include<iostream>
using namespace std;

void ratInMaze(char maze[][10],int soln[][10],int i,int j,int m,int n){
	//Base Case
	//Out of the grid or invalid cell
	if(i>m-1 or j>n-1 or maze[i][j]=='X'){
		return;
	}
	if(i==m-1 && j==n-1){
		soln[i][j] = 1;
		//Print the Grid
		for(int x=0;x<m;x++){
			for(int y=0;y<n;y++){
				cout<<soln[x][y]<<" ";
			}
			cout<<endl;
		}
		soln[i][j] = 0;
		cout<<endl;
		return;
	}
	//Recursive Case
	soln[i][j] = 1;
	ratInMaze(maze,soln,i,j+1,m,n);
	ratInMaze(maze,soln,i+1,j,m,n);
	soln[i][j] = 0;

}

int main(){

	char maze[][10] = {
		{"0000"},
		{"00X0"},
		{"00XX"},
		{"000X"},
		{"X000"}
	};
	int soln[10][10] = {0};
	ratInMaze(maze,soln,0,0,5,4);

	return 0;
}

