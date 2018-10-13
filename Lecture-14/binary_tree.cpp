#include<iostream>
using namespace std;
//------------Node Class
class node{
public:
	int data;
	node* left;
	node* right;


	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

//------------Binary Tree 


 node *buildRec(){
 	//Read the input
 	int d;
 	cin>>d;

 	//Base Case
 	if(d==-1){
 		return NULL;
 	}
 	//Recursive Case
 	node* root = new node(d);
 	root->left = buildRec();
 	root->right = buildRec();
 	return root;
 }

void printPre(node *root){
		if(root==NULL){
			return;
		}
		cout<<root->data<<" ";
		printPre(root->left);
		printPre(root->right);
}
void printIn(node *root){
		if(root==NULL){
			return;
		}
		
		printIn(root->left);
		cout<<root->data<<" ";
		printIn(root->right);
}
void printPost(node *root){
		if(root==NULL){
			return;
		}
		
		printPost(root->left);
		printPost(root->right);
		cout<<root->data<<" ";
}


int main(){
	node*root = buildPre();
	printPre(root);

	return 0;
}