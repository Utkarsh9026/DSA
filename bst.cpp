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

Node* insertIntoBst(Node* root,int data){

    if(root==NULL){
        root=new Node(data);
    }

    if(data>root->data){
        root->right=insertIntoBst(root->right,data);
    }

    else{
        root->left=insertIntoBst(root->left,data);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
}

void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
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

void preOrderTraversal(Node* root){

    if(!root){
        return;
    }

    cout<<root->data<<" ";

    preOrderTraversal(root->left);
    
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){

    if(!root){
        return;
    }

    inOrderTraversal(root->left);

    cout<<root->data<<" ";

    inOrderTraversal(root->right);
}

void postOrderTraversal(Node* root){

    if(!root){
        return;
    }

    postOrderTraversal(root->left);

    postOrderTraversal(root->right);

    cout<<root->data<<" ";
}

Node* findNodeInbst(Node* root,int target){
    if(root==NULL){
        return NULL;
    }

    if(root->data==target){
        return root;
    }

    else if(root->data>target){
       return findNodeInbst(root->left,target);
    }

    else if(root->data<target){
        return findNodeInbst(root->right,target);
    }
}

int minVal(Node* root){

    Node* temp=root;

    if(temp==NULL){
        return -1;
    }

    while(temp->left!=NULL){
        temp=temp->left;
    }

    return temp->data;
}

int maxVal(Node* root){

    Node* temp=root;

    if(temp==NULL){
        return -1;
    }

    while(temp->right!=NULL){
        temp=temp->right;
    }

    return temp->data;
}

// mark for revision

Node* deleteIntoBst(Node* root,int target){

    if(root==NULL){
        return NULL;
    }

    if(root->data==target){

        if(root->left==NULL && root->right==NULL){
            return NULL;
        }

        else if(root->left!=NULL && root->right==NULL){
            Node* child = root->left;
            return child;
        }

        else if(root->left==NULL && root->right!=NULL){
            Node* child = root->right;
            return child;
        }

        else{
            int inOrderpre=maxVal(root->left);
            root->data=inOrderpre;
            root->left=deleteIntoBst(root->left,inOrderpre);
            return root;
        }
    }

    else if(root->data>target){
        root->left=deleteIntoBst(root->left,target);
    }

    else if(root->data<target){
        root->right=deleteIntoBst(root->right,target);
    }

    return root;
}

Node* inOrderToBst(int inOrder[] , int s , int e){

        if(s>e){
            return NULL;
        }
        
        int mid=(s+e)/2;

        Node* root = new Node(inOrder[mid]);

        root->left = inOrderToBst(inOrder,s,mid-1);

        root->right = inOrderToBst(inOrder,mid+1,e);

        return root;
}

int main(){
    // Node* root = NULL;
    // cout<<"Enter the data for the node: "<<endl;
    // takeInput(root);
    // cout << "Printing the tree" << endl;
	// levelOrderTraversal(root);
	// cout << endl;

    // cout << "Printing Inorder: " << endl;
	// inOrderTraversal(root);
	// cout << endl;
	// cout << "Printing Preorder: " << endl;
	// preOrderTraversal(root);
	// cout << endl;
	// cout << "Printing Postorder: " << endl;
	// postOrderTraversal(root);

    // root = deleteIntoBst(root, 100);
    // levelOrderTraversal(root);

    int inOrder[]= {1,2,3,4,5,6,7,8,9};
	int s = 0;
    int e = 8;
    Node* root = inOrderToBst(inOrder,s,e);
    levelOrderTraversal(root);
    return 0;
}