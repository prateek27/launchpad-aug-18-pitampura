#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	for(int i=1;i<=10;i++){
		v.push_back(i*i);
	}

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	//----Begin to end
	for(auto it = v.begin();it!=v.end();it++){
		cout<<(*it)<<endl;
	}
	//Smarter way
	cout<<"Third way";
	for(int i:v){
		cout<<i<<endl;
	}


}