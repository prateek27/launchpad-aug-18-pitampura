#include<iostream>
using namespace std;

class Fun{
public:
	bool operator()(int a,int b){
		cout<<"Having Fun!";
		return a<b;
	}
};

int main(){
	Fun f;
	Fun myFun; //Functional Object

	f();
	cout<<endl;
	myFun();


}