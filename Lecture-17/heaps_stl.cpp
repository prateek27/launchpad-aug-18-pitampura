#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Fun{
public:
	bool operator()(int a,int b){
		return a>b;
	}
};

int main(){
	//priority_queue<int> hmax;
	//priority_queue<int,vector<int>,greater<int> > h;
	priority_queue<int,vector<int>,Fun> h;


	int a[] = {4,3,2,1,5,7,6};
	int n = 7;

	for(int i=0;i<n;i++){
		h.push(a[i]);
	}
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}

	return 0;
}