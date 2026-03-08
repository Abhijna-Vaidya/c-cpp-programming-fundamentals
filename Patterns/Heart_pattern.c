//  * *   * * 
// *    *    *
// *         *
//  *       *
//   *     *
//    *   *
//      *

#include<stdio.h>
int main(){
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(i==0 && j%3!=0){
                printf(" * ");
            }else if(i==1 && j%3==0){
                printf(" * ");
            }
            else if(i-j==2){
                printf(" * ");
            }else if(i+j==8){
                printf(" * ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    // for(int i=4;i>=0;i--)
    // {
    //     for(int j=0;j<7;j++)
    //     {
    //         if(i==0 && j%3!=0){
    //             printf(" * ");
    //         }else if(i==1 && j%3==0){
    //             printf(" * ");
    //         }
    //         else if(i-j==2){
    //             printf(" * ");
    //         }else if(i+j==8){
    //             printf(" * ");
    //         }else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
} 