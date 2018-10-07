#include <iostream>
using namespace std;

class Queue {
	int front;
	int rear;
	int max_size;
	int current_size;
	int *arr;
public:
	Queue(int default_size = 4) {
		front = 0;
		arr = new int[default_size];
		current_size = 0;
		max_size = default_size;
		rear = default_size - 1;
	}
	bool isFull() {
		return current_size == max_size;
	}
	bool isEmpty() {
		return current_size == 0;
	}
	int getFront() {
		return arr[front];
	}
	void enqueue(int data) {
		if(!isFull()) {
			rear = (rear+1)%max_size;
			arr[rear] = data;
			current_size++;
		}
	}
	void dequeue() {
		if(!isEmpty()) {
			front = (front+1)%max_size;
			current_size--;
		}
	}
};


int main(int argc, char const *argv[])
{
	Queue obj;
	for(int i=0;i<5;i++) {
		obj.enqueue(i);
	}
	while(!obj.isEmpty()) {
		cout<<obj.getFront()<<endl;
		obj.dequeue();
	}
	return 0;
}
