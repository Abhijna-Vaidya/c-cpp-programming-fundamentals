#include<iostream>
using namespace std;
int getsum(int n, int sum){
    if(n==0)
    return sum;
    else
    return getsum(n-1,n+sum);

    // (OR)
    // if(n==0)
    // return 0;
    // else
    // return n+sum(n-1);
}
int main(){
    int n ,sum=0,first=0,sec=1;
    cout<<"Enter a number ";
    cin>>n;
    cout<<first<<"\t";
    cout<<sec<<"\t";
    int i=2;
    while(i<n){  
        sum=first+sec;
        cout<<sum<<"\t";
        first=sec;
        sec=sum;
        i++;
    }
    
}