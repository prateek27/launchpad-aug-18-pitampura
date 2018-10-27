#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{

	list<pair<int,int> > *l; 
	int V;
public:
	Graph(int maxSize){
		V = maxSize;
		l = new list<pair<int,int > >[maxSize];
	}

	void addEdge(int u,int v,int wt,bool bidir=true){
		l[u].push_back(make_pair(wt,v));
		if(bidir){
			l[v].push_back(make_pair(wt,u));
		}
	}
	void print(){
		
		for(int i=0;i<V;i++){
			int node = i;

			cout<<"Node "<<node<<"->";
			
			auto neigbours = l[node];
			

			for(auto n:neigbours){
				cout<<"["<<n.first<<","<<n.second<<"] ";
			}
			cout<<endl;
		}
	}
};


int main(){

	Graph g(5);
	g.addEdge(0,1,10);
	g.addEdge(0,2,11);
	g.addEdge(1,2,12);
	g.addEdge(2,3,13);

	g.print();

	return 0;
}