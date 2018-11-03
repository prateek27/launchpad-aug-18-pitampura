#include<iostream>
#include<list>
#include<queue>
using namespace std;


class Graph{
	int V;
public:
	list<int> *l;

	Graph(int v){
		V = v;
		l = new list<int>[V];
	}

	void addEdge(int u,int v,bool bidir=true){
		l[u].push_back(v);
		if(bidir){
			l[v].push_back(u);
		}
	}
	//Iterate using a loop - Breadth First Search
	void bfs(int s){
		queue<int> q;
		q.push(s);


		int *dist = new int[V];
		//Init all nodes with inf dist
		for(int i=0;i<V;i++){
			dist[i] = INT_MAX;
		}
		dist[s] = 0;

		while(!q.empty()){
			int node  = q.front();
			q.pop();

			for(auto child:l[node]){
				if(dist[child]==INT_MAX){
					q.push(child);
					dist[child] = dist[node] + 1;
				}	
			}
		}

		//Print the dist of all nodes
		for(int i=0;i<V;i++){
			cout<<"dist["<<i<<"]"<<"="<<dist[i]<<endl;
		}

	}
};

int main(){

	Graph g(6);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(3,1);
	g.addEdge(2,4);
	g.addEdge(4,3);
	g.addEdge(3,5);

	g.bfs(0);

	return 0;
}