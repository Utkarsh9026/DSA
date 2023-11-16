#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* buildTree(){
    int data;
    cout<<"Enter the data:"<<endl;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node* root = new Node(data);

	cout << "Enter data for left part of " << data << " node " << endl;
	root->left = buildTree();
	
	cout << "Enter data for right part of " << data << " node " << endl;
	root-> right = buildTree();

	return root;
}

void leftView(Node* root,vector<int>& ans,int level){

    if(root == NULL){
        return;
    }

    if(ans.size()==level){
        ans.push_back(root->data);
    }

    leftView(root->left,ans,level+1);
    leftView(root->right,ans,level+1);

}

void rightView(Node* root,vector<int>& ans,int level){

    if(root == NULL) return;

    if(ans.size()==level) 
        ans.push_back(root->data);
    
    rightView(root->right,ans,level+1);
    rightView(root->left,ans,level+1);

}

int main(){
    Node* root = buildTree();

    vector<int>ans;
    int level=0;
    // leftView(root,ans,level);

    // cout<<"Printing the left view:"<<endl;
    // for(auto i:ans){
    //     cout<<i<<" ";
    // }

    cout<<endl;

    rightView(root,ans,level);
    cout<<"Printing the right view: "<<endl;
    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}