#include<iostream>
#include<cstring>
using namespace std;


template<typename T>
class Node{

public:
	string key;
	T value;
	Node<T> *next; //Pointer to a node containing value of T type

	Node(string key,T value){
		this->key = key;
		this->value  = value;
		next = NULL;
	}
	~Node(){
		if(next!=NULL){
			delete next;
		}
	}
};

template<typename T>
class Hashtable{
	Node<T> **table;
	int ts;
	int cs;

	int hashFn(string key){
		int ans = 0;
		int p = 1;

		for(int i=0;key[i]!='\0';i++){
			ans += key[i]*p;
			ans %= ts;
			p = (p*37)%ts;
		}
		return ans%37;
	}
	void rehash(){
		//Naya Pointer, Purana table
		Node<T> **oldTable = table;
		int oldTs = ts;
		cs = 0;
		ts = 2*ts;
		//Purana Pointer, Naya Table
		table = new Node<T>*[ts];
		//Init Table Buckets with NULL
		for(int i=0;i<ts;i++){
			table[i] = NULL;
		}
		//Iterate over old table and copy elements to new table
		for(int i=0;i<oldTs;i++){
			Node<T>*temp = oldTable[i];

			while(temp!=NULL){
				insert(temp->key,temp->value);
				temp = temp->next;
			}
			if(oldTable[i]!=NULL){
				delete oldTable[i];
			}
		}
		delete [] oldTable;
	}

public:
	Hashtable(int ds=7){
		cs = 0;
		ts = ds;
		table = new Node<T>*[ts];
		//Init Table Buckets with NULL
		for(int i=0;i<ts;i++){
			table[i] = NULL;
		}
	}
	void insert(string key,T value){
		int index = hashFn(key);

		Node<T>  *n = new Node<T>(key,value);

		n->next = table[index];
		table[index] = n;
		cs++;

		float load_factor = cs/float(ts);
		if(load_factor>0.7){
			rehash();
		}
	}
	____ search(int key){



		return ____;
	}
	void erase(int key){

		


		return;
	}



	void print(){

		for(int i=0;i<ts;i++){
			Node<T>*temp = table[i];
			cout<<"Head "<<i<<" = ";
			while(temp!=NULL){
				cout<<temp->key<<"-->";
				temp = temp->next;
			}
			cout<<endl;
		}
	}

};


int main(){

	Hashtable<int> h;
	h.insert("Mango",190);
	h.insert("Apple",180);
	h.insert("Guava",90);
	h.insert("Pineapple",10);
	h.insert("Kiwi",100);
	h.insert("GreenApple",150);

	h.print();

	return 0;
}