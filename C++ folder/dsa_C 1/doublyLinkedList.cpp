#include<iostream>
using namespace std;
int size=0;

class Node{
    public:
    char data;
    Node *left,*right;
    Node(char data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};




void insertAtHead(int data,Node **head){
    Node *n=new Node(data);
    if(*head==NULL){
        *head=n;
        size++;
        return;
    }else{
     n->right=*head;
     Node *temp=*head;
     while(temp->right!=NULL){
        temp=temp->right;
    }
    temp->left=n;
    }
    *head=n;
    size++;
}

void display(Node *head){
    while(head!=NULL){
        cout<<head->data<<"<->";
        head=head->right;
    }
    cout<<"NULL\n";
}

void insertAtTail(char val,Node **Head){
    Node *n=new Node(val);
    Node *ptr=*Head;
    if(*Head==NULL){
        *Head=n;
    }else{
        while(ptr->right!=NULL){
            ptr=ptr->right;
        }
        ptr->right=n;
        n->left=ptr;
    }
    size++;
}

void insertAtPosition(int val,int pos,Node **Head){
    Node *n=new Node(val);
    Node *temp=*Head;
    if(pos>size-1 || pos<0){
        cout<<"Get Lost!\n";
        return;
    }else{
        while(pos-- && temp!=NULL){
            temp=temp->right;
        }
        n->right=temp;
        temp->left->right=n;
        temp->left=n;
    }
    size++;
}

void rotate(int n,Node **Head){
    Node *ptr=*Head,*q;
    for(int i=1;i<n;i++){
        ptr=ptr->right;
    }
    q=ptr;
    while(q->right!=NULL){
        q=q->right;
    }
    q->right=*Head;
    (*Head)->left=q;
    *Head=ptr->right;
    ptr->right=NULL;
}


// void rotate_11(int pos,Node **Head){
//     if(pos==0)
//     return;
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }

//     temp->next=head;
//     head->prev=temp;

//     while(pos--){
//         head=head->next;
//         temp=temp->next;
//     }

//     temp->next=NULL;
//     head->pev=NULL;
// }

int main(){
    Node *head=NULL;
    //insertAtHead(10,&head);
    //display(head);
    insertAtTail('a',&head);
    insertAtTail('b',&head);
    insertAtTail('c',&head);
    insertAtTail('d',&head);
    insertAtTail('e',&head);
    display(head);
    rotate(3,&head);
    display(head);
    // insertAtPosition(30,1,&head);
    // display(head);
    // insertAtPosition(40,2,&head);
    // display(head);
    return 0;
}