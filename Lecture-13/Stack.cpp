#include <iostream>
#include <vector>
using namespace std;

class Stack {
	vector<int> v;
	int top;
public:
	Stack() {
		top = -1;
	}
	bool isEmpty() {
		return v.size() == 0;
	}
	void push(int data) {
		v.push_back(data);
		top++;
	}

	void pop() {
		if(isEmpty()) {
			cout<<"Stack is empty"<<endl;
			return;
		}
		v.pop_back();
		top--;
	}
	int peek() {
		if(isEmpty()){
			cout<<"Stack is empty"<<endl;
			return -1;
		}
		return v[top];
	}
	void display() {
		while(!isEmpty()) {
			cout<<peek()<<endl;
			pop();
		}
	}
};
int main(int argc, char const *argv[])
{
	Stack s;
	for(int i=0;i<10;i++) {
		s.push(i);
	}
	s.display();
	return 0;
}
