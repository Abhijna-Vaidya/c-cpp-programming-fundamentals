#include<iostream>
using namespace std;
int main(){
    int k=3;
    int a[]={
        1,2,3,1,4,5,2,3,6
    };
    for(int i=0;i<=9-k;i++){
        int max=a[i];
        for(int j=i;j<i+k;j++){
            if(max<a[j]){
                max=a[j];
            }
        }
            cout<<max<<" ";
    }
}