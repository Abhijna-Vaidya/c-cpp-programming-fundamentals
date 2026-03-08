#include<iostream>
using namespace std;
int main(){
    int a[]={
        2,0,2,0,3,1
    };
    int waterFilled=0;
    int leftMin,rightMin,neiMin,leftArray[10],rightArray[10];
    for(int i=1;i<5;i++){
        int leftMax=a[i];
        for(int j=i-1;j>=0;j--){
            leftMax=max(leftMax,a[j]);
        }
        int rightMax=a[i];
        for(int j=i+1;j<6;j++){
            rightMax=max(rightMax,a[j]);
        }
        int threshold=min(leftMax,rightMax);
        // if(a[i]<=threshold){
            waterFilled=waterFilled+(threshold-a[i]);
        // }
    }
    cout<<waterFilled;
}




