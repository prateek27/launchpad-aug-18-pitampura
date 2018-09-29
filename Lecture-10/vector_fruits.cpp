#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool fruitcompare(pair<string,int> a,pair<string,int> b){
	return a.second<b.second;
}

int main(){

	//Resizeable Array - Vector
	vector<pair<string,int> >  v;

	int n;
	cin>>n;

	string f;
	int p;

	for(int i=0;i<n;i++){
		cin>>f>>p;
		v.push_back(make_pair(f,p));
	}

	sort(v.begin(),v.end(),fruitcompare);
	
	
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<" "<<v[i].second;
	}





	return 0;
}