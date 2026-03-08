#include<iostream>
#include<algorithm>
using namespace std;

// void swap(int **arr,int i,int j){
//     // if(*(*arr+i)>*(*arr+j)){
//     //     int temp=*(*arr+i);
//     //     *(*arr+i)=*(*arr+j);
//     //     *(*arr+j)=temp;
//     // }
//     cout<<*(*arr+j);
// }
// void display(int arr[],int size){
//     for(int i=0;i<(size);i++){
//         cout<<arr[i];
//     }
// }
// int main(){
//     int arr[]={
//         -1,2,-3,4,5,6,-7,8,9
//     };
//     int size=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<(sizeof(arr)/sizeof(arr[0]))-2;i++){
//         for(int j=i+1;j<(sizeof(arr)/sizeof(arr[0]))-1;j++){
//             swap(&arr,i,j);
//         }
//     }
//     display(arr,size);
// }

void swap(int *a,int *i){
    if(*a>*i){
        int temp=*a;
        *(a)=(*i);
        (*i)=temp;
    }
    // cout<<*(*arr+j);
}
void display(int arr[],int size){
    for(int i=0;i<(size);i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[]={
        -1,2,-3,4,5,6,-7,8,9
    };
    int size=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<(sizeof(arr)/sizeof(arr[0]))-2;i++){
    //     for(int j=i+1;j<(sizeof(arr)/sizeof(arr[0]))-1;j++){
    //         swap(&arr[i],&arr[j]);
    //     }
    // }
sort(arr,arr+size);
    display(arr,size);
}