#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(){

    int data;
    cout<<"Enter the data:"<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);
    
    cout << "Enter data for left part of " << data << " node " << endl;
    root->left = buildTree();

    cout << "Enter data for right part of " << data << " node " << endl;
    root->right = buildTree();

    return root;
}

void leftBoundary(Node* root){
    
    if(root == NULL) return;

    if(root->left==NULL && root->right==NULL) return;

    cout<<root->data<<" ";

   if(root->left){
     leftBoundary(root->left);
   }
   else{
    leftBoundary(root->right);
   }
}

void leafBoundary(Node* root){

    if(root==NULL) return;

    if(root->left==NULL && root->right == NULL){
        cout<<root->data<<" ";
    }

    leafBoundary(root->left);

    leafBoundary(root->right);

}

void rightBoundary(Node* root){

    if(root == NULL) return;

    if(root->left==NULL && root->right==NULL) return;

    if(root->right){
        rightBoundary(root->right);
    }

    else{
         rightBoundary(root->left);
    }
    
    cout<<root->data<<" ";

}

void boundaryTraversal(Node* root){

    if(root==NULL) return;

    cout<<root->data<<" ";

    leftBoundary(root->left);

    leafBoundary(root);

    rightBoundary(root->right);
}

int main(){
    Node* root = buildTree();

    boundaryTraversal(root);

    return 0;
}