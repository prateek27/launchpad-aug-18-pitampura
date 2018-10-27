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
	void recPrintHelper(int s,bool *visited){
		cout<<s<<" ";
		visited[s]  = true;

		for(auto p:l[s]){
			int node = p.second;
			if(!visited[node]){
				recPrintHelper(node,visited);
			}
		}
		return;
	}

	void recPrint(int s){
		bool *visited = new bool[V]{0};
		recPrintHelper(s,visited);

		cout<<endl;

		for(int i=0;i<V;i++){
			if(!visited[i]){
				recPrintHelper(i,visited);
				cout<<endl;
			}
		}

	}
};


int main(){

	Graph g(7);
	g.addEdge(0,1,10);
	g.addEdge(0,2,11);
	g.addEdge(1,2,12);
	g.addEdge(2,3,13);
	g.addEdge(4,3,7);
	g.addEdge(5,6,11);

	g.print();
	cout<<endl;
	g.recPrint(1);

	return 0;
}