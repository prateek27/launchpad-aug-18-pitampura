#include<iostream>
#include<map>
#include<list>
using namespace std;

class Graph{
	map<string,list<pair<int, string > > > adjList; 

public:
	Graph(){
	}

	void addEdge(string u,string v,int wt=1,bool bidir=true){
		adjList[u].push_back(make_pair(wt,v));
		if(bidir){
			adjList[v].push_back(make_pair(wt,u));
		}
	}
	void print(){

		for(auto p:adjList){
			string keyCity = p.first;
			auto neigbours = p.second; //list of neigbours

			cout<<keyCity<<"->";
			for(auto cityPair:neigbours){
				cout<<"["<<cityPair.second<<","<<cityPair.first<<" ]";
			}
			cout<<endl;
		}
	}
};


int main(){

	Graph g;
	g.addEdge("Delhi","Amritsar",5);
	g.addEdge("CB","HauzKhasVillage",7);
	g.addEdge("CB","Pacific Mall",8,false);
	g.addEdge("Connaught Place","HauzKhasVillage",10);
	g.addEdge("Connaught Place","CB",13);
	g.addEdge("Connaught Place","Delhi");
	
	g.print();
	

	return 0;
}