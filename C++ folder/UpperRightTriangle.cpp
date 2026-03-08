#include<iostream>
using namespace std;
int main(){
    int a[10][10],m,n;
    cin>>m>>n;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
     }
cout<<endl;

     for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            
            if(i<=j){
                cout<<a[i][j]<<" ";
            }else{
            cout<<"  ";
            }
        }
        cout<<endl;
     }
}