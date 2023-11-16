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

int find(int arr[],int n,int ele){
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            return i;
        }
    }
    return -1;
}

Node* buildTreeInorderPreorder(int preOrder[],int inOrder[],int size,int &preIndex,int startIn,int endIn){

    if(preIndex >= size || startIn>endIn){
        return NULL;
    }

    int element = preOrder[preIndex++];
    Node* root = new Node(element);
    int pos = find(inOrder,size,element);
    
    root->left = buildTreeInorderPreorder(preOrder,inOrder,size,preIndex,startIn,pos-1);
    root->right = buildTreeInorderPreorder(preOrder,inOrder,size,preIndex,pos+1,endIn);

    return root;
}

void levelOrderTraversal(Node* root){

    // vector<Node*> ans;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                // ans.push_back(NULL);
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    int preOrder[] = {10,20,40,50,30,60,70};
    int inOrder[] = {40,20,50,10,60,30,70};
    int size = 7;
    int preIndex = 0;
    int startIn = 0;
    int endIn = size-1;

    Node* traversal = buildTreeInorderPreorder(preOrder,inOrder,size,preIndex,startIn,endIn);
    levelOrderTraversal(traversal);

    return 0;
}