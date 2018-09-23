#include<iostream>
using namespace std;

void permute(char *a,int i){
	//Base Case
	if(a[i]=='\0'){
		cout<<a<<endl;
		return;
	}

	//Recursive Case
	for(int j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);
		permute(a,i+1);
		//Backtrack
		swap(a[i],a[j]);
	}
	return;
}


int main(){

	char in[100];
	cin>>in;

	permute(in,0);

	return 0;
}