#include<iostream>
#include<algorithm>
using namespace std;

bool mycompare(int a,int b){
	//cout<<"Comparing "<<a<<" and "<<b<<endl;
	return a>b;
}

//Standard Template Library(STL)
int main(){


	int a[] = {5,4,1,2,3};
	int n = 5;

	sort(a,a+n,mycompare);

	for(int i=0;i<n;i++){
		cout<<a[i] <<" ";
	}

	return 0;
}

