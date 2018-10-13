#include <iostream>
#include <stack>
using namespace std;
int main(int argc, char const *argv[])
{
	stack<string> st;
	st.push("apple");
	st.push("mango");
	st.push("guvava");
	while(!st.empty()) {
		cout<<st.top()<<endl;
		st.pop();
	}
 	return 0;
}
