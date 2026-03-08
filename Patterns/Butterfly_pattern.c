#include<stdio.h>
int main(){
    int rows=10;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows;j++){
            if(j<=i )
            printf("*");
            else
            printf(" ");
        }
        for(int k=rows;k>=0;k--){
            if(k<i || i==rows)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=rows;j++){
            if(j<=i )
            printf("*");
            else
            printf(" ");
        }
        for(int k=rows;k>=0;k--){
            if(k<i || i==rows)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}