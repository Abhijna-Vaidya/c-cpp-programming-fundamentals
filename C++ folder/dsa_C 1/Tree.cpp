#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* createNode(int val){
    Node* n=new Node(val);
    return n;
}

void createTree(int val,Node *root){
    Node *n=new Node(val);
    if(root->right==NULL && root->left==NULL){
    if(root->data>n->data){
        root->left=n;
    }else{
        root->right=n;
    }
    }else{
        while(root->right!=NULL || root->left!=NULL){
            if(root->right==NULL){
                if(root->data < n->data){
                    root->right=n;
                }else{
                    root=root->left;
                }
            }else {                   // if(root->left==NULL)
                if(root->data > n->data){
                    root->left=n;
                }else{
                    root=root->right;
                }
            }
        }
    }
}
void bstValidation(Node* root){
    cout<<"Entered"<<endl;
    if(root==NULL){
        // return true;
        cout<<"BST"<<endl;
        return;
    }
    if(root->left->data<root->data && root->right==NULL){
        bstValidation(root->left);
    }else if(root->right->data>root->data && root->left==NULL){
        bstValidation(root->right);
    }else{
    // if(root->left->data<root->data && root->right->data>root->data){
        bstValidation(root->left);
        bstValidation(root->right);
    }
    // return false;
    cout<<"Not a BST"<<endl;
}

void display(Node *root){
    if(root==NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<endl;
    display(root->right);
}

int main(){
    
    //Level-1
    Node *root=createNode(1);
    createTree(10,root);
    createTree(9,root);
    createTree(11,root);
    display(root);
    bstValidation(root);
}