#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
	return a>b;
}

int main(){

	//Resizeable Array - Vector
	vector<int> v;

	for(int i=1;i<=10;i++){
		v.push_back(i*i);
	}
	//Removes the last element
	v.pop_back();

	v[2] = 250;

	sort(v.begin(),v.end(),compare);
	//Print 
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}


	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	cout<<v.max_size()<<endl;




	return 0;
}