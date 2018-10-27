#include<iostream>
#include<map>
#include<list>
using namespace std;

class Graph{
	map<string,list<string> > adjList; 

public:
	Graph(){
	}

	void addEdge(string u,string v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}
	void print(){

		for(auto p:adjList){
			string keyCity = p.first;
			auto neigbours = p.second; //list of neigbours

			cout<<keyCity<<"->";
			for(auto city:neigbours){
				cout<<city<<",";
			}
			cout<<endl;
		}
	}
};


int main(){

	Graph g;
	g.addEdge("Delhi","Amritsar");
	g.addEdge("CB","HauzKhasVillage");
	g.addEdge("CB","Pacific Mall",false);
	g.addEdge("Connaught Place","HauzKhasVillage");
	g.addEdge("Connaught Place","CB");
	g.addEdge("Connaught Place","Delhi");
	
	g.print();
	

	return 0;
}