#include<iostream>
#include<vector>
using namespace std;

class Heap{
	vector<int> v;

	void heapify(int i){
		int left = 2*i;
		int right = left + 1;

		int min_i = i;
		if(left< v.size() and v[left]<v[i]){
			min_i = left;
		}
		if(right< v.size() and v[right]<v[min_i]){
			min_i = right;
		}
		if(min_i!=i){
			//acts as base case as well
			swap(v[i],v[min_i]);
			heapify(min_i);
		}


	}
public:
	Heap(int defSize=100){
		v.reserve(defSize);
		//block the 0th position
		v.push_back(-1);
	}
	//Insert
	void push(int data){
		v.push_back(data);
		int index = v.size()-1;
		int parent = index/2;

		while(index>1 && v[index]<v[parent]){
			swap(v[index],v[parent]);
			index = parent;
			parent  = index/2;
		}
	}
	//Get Min
	int top(){
		return v[1];
	}
	//Remove Min
	void pop(){
		int index  = v.size() - 1;
		swap(v[1],v[index]);
		v.pop_back();
		heapify(1);
	}
	bool empty(){
		return v.size()==1;
	}


};	

int main(){

	int people[100] = {5,4,3,2,1,6,7,8,10}; //money in dollars

	Heap h;
	int n =9;
	for(int i=0;i<n;i++){
		h.push(people[i]);
	}
	i  = 0;
	while(!h.empty()){
		a[i++] = h.top();
		cout<<h.top()<<",";
		h.pop();
	}

	return 0;
}