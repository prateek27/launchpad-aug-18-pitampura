#include<iostream>
using namespace std;


int main(){

	pair<string,int> p;
	p.first = "Mango";
	p.second = 100;

	pair<string,int> p2("Apple",190);

	cout<<p2.first<<endl;
	cout<<p2.second<<endl;

	pair<string,int> p3;

	p3 = make_pair("guava",80);
	cout<<p3.first<<endl;




	return 0;
}