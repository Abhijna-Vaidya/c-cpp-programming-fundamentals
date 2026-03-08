#include<iostream>
using namespace std;

class Node{
    public:
    int key;
    Node* left;
    Node* right;

    Node(int k){
        this->key = k;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST{
    private:
    Node* root;

    //Helper Function for InsertPublic Function
    Node* insertRec(Node* root, int key){
        if(root == NULL){
            root = new Node(key);
            return root;
        }
        if(key < root->key)
            root->left = insertRec(root->left, key);
        else if(key > root->key)
            root->right = insertRec(root->right, key);

        return root;
    }

    // HElper function for Search in public
    bool searchRec(Node* root, int key){
        if(root==NULL) {return false; }
        if(root->key == key) { return true; }
        else if(key < root->key){ return searchRec(root->left, key);}
        else{return searchRec(root->right, key);}
    }

    //FindMin Function for DelectRec Case 2
    Node* findMin(Node* node){
        Node* current = node;
        while(current && current->left!=NULL){
            current = current->left;
        }
        return current;
    }

    // Helpwer Function to delec in Public
    Node* deleteRec(Node* root, int key){
        if(root == NULL){return root;}
        if(key < root->key){
            root->left = deleteRec(root->left, key);
        }else if(key > root->key){
            root->right = deleteRec(root->right, key);
        }else{
            // Node to be deleted Found!

            // Case 1: No Child or one child
            if(root->left == NULL){
                Node* temp = root->right;
                delete root;
                return temp;
            }else if(root->right == NULL){
                Node* temp = root->left;
                delete root;
                return temp;
            }
            
            // Case 2: Node with Two Children
            Node* temp = findMin(root->right);
            root->key = temp->key;
            root->right = deleteRec(root->right, temp->key);
        }
        return root;
    }

    // Helper Function for public traversalDFS functio()
    void inorderRec(Node* root){
        if(root != NULL){
            inorderRec(root->left);
            cout << root->key << " ";
            inorderRec(root->right); 
        }
    }

    public:
    // Constructor for BST root
    BST(){
        root = NULL;
    }
    //Public method for insertion
    void insert(int key){
        root = insertRec(root, key);
    }
    //Public method for searching
    bool search(int key){
        return searchRec(root, key);
    }
    // Public method for Removing
    void remove(int key){
        root = deleteRec(root, key);
    }
    // Public method for Traversal(DFS)
    void traversalDFS(){
        inorderRec(root);
        cout << endl;
    }
};




int main(){

    BST bst;
    bst.insert(100);
    bst.insert(50);
    bst.insert(70);
    bst.insert(120);
    bst.insert(30);
    bst.insert(110);
    bst.insert(150);

    int key = 60;
    if(bst.search(key)){
        cout << key << " Found in the BST!" << endl;
    }else{
        cout << key << " Not Found in the BST!" << endl;
    }
    bst.traversalDFS();

    key = 100;
    bst.remove(key);
    bst.traversalDFS();
    return 0;
}