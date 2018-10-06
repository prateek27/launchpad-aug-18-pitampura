#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int d) {
		data = d;
		next = NULL;
	}
};
	int length(Node *head) {
		int result = 0;
		while(head->next != NULL) {
			result++;
			head = head->next;
		}
		return ++result;
	}

	void insertATHead(Node *&head, int data) {
		Node *new_node = new Node(data);
		new_node->next = head;
		head = new_node;
	}

	void insertAtTail(Node *&head, int data) {
		if(head == NULL) {
			insertATHead(head, data);
			return;
		}
		Node *temp = head;
		while(temp->next != NULL) {
			temp = temp->next;
		}
		Node *new_node = new Node(data);
		temp->next = new_node;
		return;
	}



	void buildList(Node *&head) {
		int data;
		cin>>data;
		while(data!=-1) {
			insertAtTail(head, data);
			cin>>data;
		}
	}

	void print(Node *head) {
		while(head != NULL) {
			cout<<head->data<<"-->";
			head= head->next;
		}
		cout<<endl;
	}


int main(int argc, char const *argv[])
{
	Node *head = NULL;
	buildList(head);
	print(head);
	cout<<length(head);
	return 0;
}