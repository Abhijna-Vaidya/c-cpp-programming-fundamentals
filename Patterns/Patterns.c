#include<stdio.h>
void filledSquare(){
    int row=5,col=5;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("*");
        }
        printf("\n");
    }
}
void upRightFilledTriangle(){
    int row=5;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void invertedFilledTriangle(){
    int row=4;
    for(int i=row;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
void upRightNumberedTriange(){
    int row=5;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
void invertupright(){
    int row=4;
    upRightFilledTriangle();
    for(int i=row;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
void spaceUpRightFilledTriangle(){
    int row=5;
    int sp=row;
    for(int i=1;i<=row;i++){
        sp--;
        for(int j=sp;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
}
void spaceInvertedFilledTriangle(){
   int row=5;
    int star=0;
    for(int i=row;i>0;i--){
        star++;
        for(int j=1;j<star;j++){
            printf(" ");
        }
        for(int k=i;k>0;k--){
            printf("*");
        }
        printf("\n");
    } 
}
void Pascal(){
    int row=5;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            printf(" ");
        }
        for(int k=i;k>=1;k--){
            printf("%d",k);
        }
        for(int l=2;l<=i;l++){
            printf("%d",l);
        }
        printf("\n");
    }
}
void uprNinvertedPascal(){
    Pascal();
    int row=5;
    for(int i=row-1;i>0;i--){
        for(int j=1;j<row-1;j++){
            printf(" ");
        }
        for(int k=row-1;k>=1;k--){
            printf("%d",k);
        }
        for(int l=2;l<=i;l++){
            printf("%d",l);
        }
        printf("\n");
    }
}
void hollowDiamond(){
    int rows=10;
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
}
void uprightFilledOddTriangle()
{
    int row=5;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}
void invertedFilledOddTriangle()
{
    int row=5;
    for(int i=row;i>0;i--){
        for(int j=1;j<=row-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}
void uprightEquiFilledTriangle(){
    int rows=5;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}
void invertedEquiFilledTriangle(){
    int rows=5;
    for(int i=rows;i>0;i--){
        for(int j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}
void clock()
{
    int rows=5;
    for(int i=rows;i>0;i--){
        for(int j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}
void HollowTriangle(){
    int rows=5;
    for(int i=1;i<=rows;i++){
        for(int j=i;j<=rows-i;j++){
            printf(" ");
        }
        
        for(int k=1;k<=i;k++){
            if(k==i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        if(i>=2){
            for(int l=1;l<=i;l++){
                if(l==i){
                printf("*");
            }else{
                printf(" ");
            }
            }
        }
        printf("\n");
        if(i==rows){
            for(int m=1;m<=2*rows-1;m++){
                printf("*");
        }
        }
        printf("\n");
    }
}
void main()
{
    // filledSquare();
    // upRightFilledTriangle();
    // invertedFilledTriangle();
    // upRightNumberedTriange();
    // invertupright();
    // spaceUpRightFilledTriangle();
    // spaceInvertedFilledTriangle();
    // Pascal();
    //uprNinvertedPascal();
    // hollowDiamond();
    // uprightFilledOddTriangle();
    // invertedFilledOddTriangle();
    // uprightEquiFilledTriangle();
    // invertedEquiFilledTriangle();
    // clock();
    HollowTriangle();
}