//this progrsm is to find the greatest among 3.
#include<stdio.h>
#include<conio.h>
void main(){
    int x,y,z;
    printf("enter any three numbers.");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y){
        if(x>z){
            printf("%d is greatest",x);
        }
        else
        {
            printf("%d is greatest.",z);
        }
    }
    else{
        if(y>z){
            printf("%d is greatest.",y);
        }
        else{
            printf("%d is greatest",z);
        }
    }
}