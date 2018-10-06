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

	void insertAtMiddle(Node *&head, int data, int pos) {
		if(pos == 0 and head == NULL) {
			insertATHead(head, data);
			return;
		}
		if(pos >= length(head)) {
			insertAtTail(head, data);
			return;
		}
		int count = 0;
		Node *temp = head;
		while(count<=pos) {
			temp=temp->next;
			count++;
		}
		Node *new_node = new Node(data);
		new_node->next = temp->next;
		temp->next = new_node;
		return;
	}

	void deleteAtHead(Node *&head) {
		if(head == NULL) {
			return;
		}
		Node *temp = head;
		head = head->next;
		delete temp;
	}

	void deleteAtTail2(Node *&head) {
		Node *temp = head;
		while(temp->next->next != NULL) {
			temp = temp->next;
		}
		Node *to_be_removed = temp->next;
		temp->next = NULL;
		delete to_be_removed;
		return;
	}
	void deleteAtTail(Node *&head) {
		Node *temp = head;
		Node *prev = NULL;
		while(temp->next != NULL) {
			prev = temp;
			temp = temp->next;
		}
		delete temp;
		prev->next = NULL;
		return;
	}

	void deleteAtMiddle(Node *&head, int pos) {
		if(head == NULL) {
			return;
		}
		if(pos == 0) {
			deleteAtHead(head);
		}
		if(pos > length(head)) {
			deleteAtTail(head);
		}
		int jump = 1;
		Node *temp = head;
		Node *prev = NULL;
		while(jump <= pos-1) {
			prev = temp;
			temp = temp->next;
			jump += 1;
		}
		prev->next = temp->next;
		delete temp;
		return;
	}


	void reverseIterative(Node *&head) {
		Node *prev = NULL;
		Node *curr = head;
		Node *N;
		while(curr != NULL) {
			N = curr->next;
			curr->next = prev;
			prev = curr;
			curr = N;
		}
		head = prev;
	}

	Node* reverseRecursive(Node *head) {
		if(head == NULL or head->next == NULL) {
			return head;
		}

		Node *retval = reverseRecursive(head->next);
		head->next->next = head;
		head->next = NULL;
		return retval;
	}

	Node* midNode(Node *head) {
		if(head == NULL or head->next == NULL) {
			return head;
		}

		Node *slow = head;
		Node *fast = head->next;
		while(fast!= NULL and fast->next!=NULL) {
			fast = fast->next->next;
			slow = slow->next;
		}	
		return slow;
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
	head = reverseRecursive(head);
	print(head);
	cout<<length(head);
	return 0;
}