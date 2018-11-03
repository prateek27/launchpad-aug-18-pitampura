#include<iostream>
#include<list>
#include<queue>
using namespace std;


class Graph{
	int V;
	list<pair<int,int > > *l;
public:
	

	Graph(int v){
		V = v;
		l = new list<pair<int,int > >[V];
	}

	void addEdge(int u,int v,int wt,bool bidir=true){
		l[u].push_back(make_pair(v,wt));
		
		if(bidir){
			l[v].push_back(make_pair(u,wt));
		}

	}

	//Children Count
	int dfsHelper(int node,int &ans,bool *visited){

		int cnt = 1;
		visited[node] = true;
		int x=0;

		for(auto p:l[node]){
			int child = p.first;
			int wt = p.second;

			if(!visited[child]){

				x = dfsHelper(child,ans,visited);
				ans += 2*wt*min(x,V-x);
				cnt +=x;
			}
		}
		return cnt;
	}

	int dfs(){
		int ans = 0; //Sum of all edges
		bool *visited = new bool[V]{0};

		dfsHelper(0,ans,visited);
		return ans;
	}
};

int main(){

	Graph g(4);

	g.addEdge(0,1,3);
	g.addEdge(1,2,2);
	g.addEdge(3,2,2);

	cout<<g.dfs()<<endl;

	return 0;
}