#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{

	list<int> *l; 
	int V;
public:
	Graph(int maxSize){
		V = maxSize;
		l = new list<int>[maxSize];
	}

	void addEdge(int u,int v,bool bidir=true){
		l[u].push_back(v);
		if(bidir){
			l[v].push_back(u);
		}
	}
	void print(){
		
		for(int i=0;i<V;i++){
			int node = i;

			cout<<"Node "<<node<<"->";
			
			auto neigbours = l[node];
			
			for(auto n:neigbours){
				cout<<n<<",";
			}
			cout<<endl;
		}
	}
};


int main(){

	Graph g(5);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,3);

	g.print();

	return 0;
}