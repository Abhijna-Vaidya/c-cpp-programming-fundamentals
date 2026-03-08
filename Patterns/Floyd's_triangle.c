#include <stdio.h>
void main(){
    int rows=5,num=0;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            num++;
            printf("%d ",num);
        }
        printf("\n");
    }
}