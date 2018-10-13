#include<iostream>
#include<queue>
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

int count(node*root){
	if(root==NULL){
		return 0;
	}
	int c1 = count(root->left);
	int c2 = count(root->right);
	return 1 + c1 + c2;
}

int height(node*root){
	if(root==NULL){
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	return max(h1,h2) + 1;
}

void printAtLevelK(node*root,int k){
	//Base Case
	if(root==NULL){
		return;
	}
	if(k==0){
		cout<<root->data<<" ";
	}

	//Rec Case
	printAtLevelK(root->left,k-1);
	printAtLevelK(root->right,k-1);
}

//Tree Sum
int sum(node*root){

	if(root==NULL){
		return 0;
	}
	return root->data + sum(root->left) + sum(root->right);

}

//Replace Sum
int replaceChildSum(node*root){
	if(root==NULL){
		return 0;
	}
	if(root->left==NULL && root->right==NULL){
		return root->data;
	}

	int leftSum = replaceChildSum(root->left);
	int rightSum = replaceChildSum(root->right);

	int temp = root->data;
	root->data = leftSum  + rightSum;
	//	*(root).data = 
	return temp+root->data;
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
	node*root = buildRec();
	printPre(root);
	cout<<endl;
	cout<<count(root)<<endl;
	cout<<height(root)<<endl;
	//printAtLevelK(root,2);

	//replaceChildSum(root);
	//printPre(root);
	printLevelOrder(root);


	return 0;
}