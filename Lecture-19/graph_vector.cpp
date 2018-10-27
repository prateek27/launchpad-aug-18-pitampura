#include<iostream>
#include<vector>
using namespace std;

class Graph{

	vector<vector<int> > adjList;
public:
	Graph(int ds=100){
		//adjList.reserve(ds);
	}

	void addEdge(int u,int v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}
	void print(){
		cout<<adjList.size()<<endl;

		for(int i=0;i<adjList.size();i++){
			int node = i;

			cout<<"Node "<<node<<"->";
			/*
			auto neigbours = adjList[node];
			
			for(auto n:neigbours){
				cout<<n<<",";
			}
			cout<<endl;
			*/
		}
	}
};


int main(){

	Graph g;
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,3);

	g.print();

	return 0;
}