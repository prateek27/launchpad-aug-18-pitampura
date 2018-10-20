#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
	unordered_map<string,int> m;
	//Insert
	m.insert(make_pair("apple",100));
	m["guava"] = 90;

	pair<string,int> p;
	p.first = "kiwi";
	p.second = 80;
	m.insert(p);
	//Delete
	m.erase("guava");

	//Search
	if(m.count("guava")){ //return 0 or 1
		cout<<m["guava"]<<endl;
	}
	else{
		cout<<"Fruit not found!";
	}
	//Delete using erase


	//Iteration
	for(pair<string,int> p:m){ //or use auto p:m
		cout<<p.first<<endl;
		cout<<p.second<<endl;
	}

	//or use auto it = m.begin()...
	for(unordered_map<string,int>::iterator it=m.begin();it!=m.end();it++){
		cout<<it->first<<endl;
		cout<<it->second<<endl;
	}






 

}