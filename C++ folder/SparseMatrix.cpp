#include<iostream>
using namespace std;
int main(){
    int a[10][10],m;
    cin>>m;
    int z=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]==0){
                z++;
            }
        }
    }
    if(z>(m*m/2)){
        cout<<"Sparse";
    }else{
        cout<<"Not a Sparse";
    }
}