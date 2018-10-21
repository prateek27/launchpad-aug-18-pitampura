#include<iostream>
#include<queue>
#include<stdio.h>
using namespace std;

void print(priority_queue<int,vector<int>, greater<int> > h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
}

int main(){
	priority_queue<int,vector<int>, greater<int> > h;


	int cnt = 0;
	int k=3;
	int d;
	while(scanf("%d",&d)!=EOF){
		cnt+=1;
		if(d==-1){
			//Query
			print(h);
			continue;
		}
		if(cnt<=k){
			h.push(d);
		}
		else{
			if(d>h.top()){
				h.pop();
				h.push(d);
			}
		}

	}





}