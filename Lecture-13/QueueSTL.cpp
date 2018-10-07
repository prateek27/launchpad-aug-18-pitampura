#include <iostream>
#include <queue>
using namespace std;
int main(int argc, char const *argv[])
{
	queue<int> qu;
	for(int i=0;i<10;i++) {
		qu.push(i);
	}
	while(!qu.empty()) {
		cout<<qu.front()<<endl;
		qu.pop();
	}
	return 0;
}
