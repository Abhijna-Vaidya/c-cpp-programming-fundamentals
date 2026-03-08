#include<iostream>
using namespace std;

#define size 5
class Stack{

    int *arr;
    int top;
    public:
    Stack(){
        arr=new int[size];
        top=-1;
    }

    void push(int val){
        if(top==size-1){
            cout<<"\nStack Overflow!!!\n"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"\nStack Underflow\n";
            return;
        }else{
            cout<<"\nThe popped element is "<<arr[top]<<endl;
            top--;
        }
    }
    void display(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<"  ";
        }
        cout<<"\n";
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.display();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.display();
}