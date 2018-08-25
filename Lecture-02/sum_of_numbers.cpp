#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;

	int no,sume=0,sumo=0,i=0;

	while(i<n){
		cin>>no;

		if(no%2==0){
			sume = sume + no;
		}
		else{
			sumo = sumo + no;
		}
		i = i + 1;
	}
	cout<<"Even Sum "<<sume<<'\n';
	cout<<"Odd Sum "<<sumo<<endl;

	return 0;
}