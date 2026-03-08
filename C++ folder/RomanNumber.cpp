#include<iostream>
#include<map>
using namespace std;
int main(){
    string roman;
    cout<<"Enter the Roman Number";
    cin>>roman;
    int value=0;
    for(int i=1;roman[i]!='\0';i++){
        if(roman[i-1]=='I' && roman[i]=='V'){
            value=value+5-1 ;
        }
        else if(roman[i-1]=='I' && roman[i]=='X'){
            value=value+10-1;
        }
        else if(roman[i-1]=='V' && roman[i]=='I'){
            value=value+5+1;
        }
        else if(roman[i-1]=='X' && roman[i]=='I'){
            value=value+10+1;
        }
        else if(roman[i-1]=='X' && roman[i]=='V'){
            value=value+10+5;
        }
        else if(roman[i-1]=='I' && roman[i]=='I'){
            value=value+1;
        }
    }
    cout<<value;
    value=0;
}