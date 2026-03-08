#include<iostream>
#include<stack>
// #include<string>
using namespace std;
int main(){
    string sentence="My name is Abhijna";
    stack<string> stack;
    for(int i=0;i<sentence.length();i++){
        string word="";
        while(sentence[i]!=' ' && i<sentence.length()){
            word+=sentence[i];
            i++;
        }
        stack.push(word);
    }
    while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
    }
}