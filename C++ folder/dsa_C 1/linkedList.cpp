# include<iostream>
using namespace std;
int size=0;

class Node{
    public: 
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(int val,Node **hhead){
    Node *n=new Node(val);
    n->next=*hhead;
    *hhead= n;
    size++;
}
void display(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL\n";
}
void insertAtTail(int val,Node *&Head){
    Node *n=new Node(val);
    Node *ptr=Head;
    if(ptr==NULL){
        ptr->next=n;
        size++;
    }
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=n;
    size++;
}
void insertAfterNode(int val,int position,Node **Head){
    Node *n=new Node(val);
    Node *temp=*Head;
    while(temp->data!=position){
        
        temp=temp->next;
        if(temp==NULL){
        cout<<"value not found\n";
        return;
        }
    }
    n->next=temp->next;
    temp->next=n;
    size++;
}
void insertAtIndex(int val,int index,Node **Head)
{
    Node *n=new Node(val);
    Node *ptr=*Head;int count=0;
    while(index-1!=count){
        ptr=ptr->next;
        count++;
        if(count==size-1){
        cout<<":( index not found\n";
        return;
        }
    }
    n->next=ptr->next;
    ptr->next=n;
    size++;
}


int main(){
    Node *head=NULL;
    display(head);
    insertAtTail(30,head);
    display(head);
    insertAfterNode(20,40,&head);
    display(head);
    insertAtIndex(50,2,&head);
    display(head);
    insertAtHead(10,&head);

    return 0;
}