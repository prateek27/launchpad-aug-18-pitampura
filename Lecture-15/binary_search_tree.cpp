#include<iostream>
#include<queue>
#include<cmath>
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

//------------Binary Search Tree 

node* insertInBst(node*root,int d){
	if(root==NULL){
		return new node(d);
	}
	//Rec Case
	if(d<root->data){
		root->left = insertInBst(root->left,d);
	}
	else{
		root->right = insertInBst(root->right,d);
	}
	return root;
}

bool search(node*root, int key){

	//Base Case
	if(root==NULL){
		return false;
	}
	if(root->data==key){
		return true;
	}
	if(key<root->data){
		return search(root->left,key);
	}
	return search(root->right,key);
}
node* deleteFromBST(node*root,int key){
	if(root==NULL){
		//key doesnt exist
		return root;
	}
	if(key<root->data){
		// search in left subtree
		root->left = deleteFromBST(root->left,key);
		return root;
	}
	else if(key>root->data){
		// search in right subtree
		root->right =  deleteFromBST(root->right,key);
		return root;
	}
	else{
		//Key==root->data, key mil gyi!
		if(key==root->data){
			//0 children
			if(root->left==NULL && root->right==NULL){
				delete root;
				return NULL;
			}
			//1 child
			else if(root->left==NULL && root->right!=NULL){
				node*temp = root->right;
				delete root;
				return temp;
			}

			else if(root->left!=NULL && root->right==NULL){
				node*temp = root->left;
				delete root;
				return temp;
			}

			//2 children

			else{
				node* nextBig = root->right;
				
				while(nextBig->left!=NULL){
					nextBig = nextBig->left;
				}
				root->data = nextBig->data;

				root->right = deleteFromBST(root->right,root->data);
				return root;
				
			}
		}

	}
}



node* buildFromArray(int a[],int s,int e){


}


 node *buildBST(){
 	//Read the inp
 	int d;
 	cin>>d;
 	node*root = NULL;
 	while(d!=-1){
 		root = insertInBst(root,d);
 		cin>>d;
 	}
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
void printLevelOrder(node*root){

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* f = q.front();

		if(f==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}

		else{
			cout<<f->data<<" ";
			q.pop();
			if(f->left){
				q.push(f->left);
			}
			if(f->right){
				q.push(f->right);
			}
		}

	}

}



int main(){
	node*root = buildBST();

	cout<<"Enter Node to Delete";
	int key;
	cin>>key;

	//root  = deleteFromBST(root,key);


	printPre(root);
	cout<<endl;
	printIn(root);
	cout<<endl;
	printPost(root);
	cout<<endl;
	printLevelOrder(root);

	return 0;
}