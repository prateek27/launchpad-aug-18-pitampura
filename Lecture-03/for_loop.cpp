#include<iostream>
using namespace std;


int main(){


	int n;
	cin>>n;
	int i=1;
	
	for(  ; ; ){

		if(i> n){
			break;
		}
		
		cout<<i<<"--"<<i*i<<endl;
		i = i +1;
	}


	return 0;
}