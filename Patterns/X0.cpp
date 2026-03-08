#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i%2==0){
                if(j%2==0){
                    cout<<"X"<<" ";
                }else{
                    cout<<"O"<<" ";
                }
            }else{
                if(j%2==0){
                    cout<<"O"<<" ";
                }else{
                    cout<<"X"<<" ";
                }

            }
        }
        
            cout<<endl;
    }
}