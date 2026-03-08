// #include<iostream>
// using namespace std;
// int minJump(int a[]){
//     int j[13];
//     j[0]=0;
//     for(int i=0;i<13;i++){
//         int Element=a[i]
//         for(int j=0;j<a[i];j++){
//             int ele=a[j];
//             if((13-(i+j))>ele && ){
                
//             }
//         }
//     }
// }
// int main(){
//     int a[]={1,5,2,7,5,6,3,7,8,3,8,3,7};
//     int jumps=minJump(a);
//     cout<<jumps;
// }

#include<iostream>
using namespace std;

int MinJumps(int arr[], int size){
    if(size==0 || arr[0] == 0){
        return -1;
    }

    // jumps[size-1] the answer will be stored
    int jump[size];
    jump[0] = 0;

    for(int i=1; i<size; i++){
        jump[i] = INT_MAX;
        for(int j=0; j<i; j++){
            if(i<=j + arr[j] && jump[j]!=INT_MAX){
                jump[i] = min(jump[i], jump[j] + 1);
                break;
            }
        }
    }


    return jump[size-1];

}

int main(){
    int arr[] = {1, 5, 2, 7, 5, 6, 3, 7, 8, 3, 8, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum No of Jumps needed to reach last is: " << MinJumps(arr, size);
    
    return 0;
}