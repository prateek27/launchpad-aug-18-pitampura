#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
#define um unordered_map<int, vector<int> >

class node{
public:
    int data;
    node*left;
    node*right;

    node(int d){
        data = d;
        left = right = NULL;
    }
};

void verticalOrderPrint(node*root,um &m,int d=0){

    if(root==NULL){
        return ;
    }
    m[d].push_back(root->data);
    verticalOrderPrint(root->left,m,d-1);
    verticalOrderPrint(root->right,m,d+1);
}

int main(){

    node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    root->right->right->right = new node(9);

    root->left->right->right = new node(8);

    um m;

    verticalOrderPrint(root,m);


    ///Map pe iterate krna hai
    int min_key = INT_MAX;
    int max_key = INT_MIN;

    for(auto it=m.begin();it!=m.end();it++){

        min_key = min(min_key,it->first);
        max_key = max(max_key,it->first);
    }

    for(int key=min_key;key<=max_key;key++){

        for(int i=0;i<m[key].size();i++){
            cout<<m[key][i]<<" ";
        }
        cout<<endl;

    }






return 0;
}
