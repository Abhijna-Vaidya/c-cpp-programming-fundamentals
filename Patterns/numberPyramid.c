#include<stdio.h>
void main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}