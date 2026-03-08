#include<stdio.h>
void main(){
    int n=9;
    for(int i=n/2+1;i>1;i--){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n/2+1;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}