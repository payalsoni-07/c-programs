//c program to multiply two numbers by russian peasant method.
#include<stdio.h>
#include<conio.h>
void main(){
    int x,y,s=0;
    printf("enter first number:");
    scanf("%d",&x);
    printf("enter second number:");
    scanf("%d",&y);
    while(x>=1){
        if(x%2!=0){
            s=s+y;
        }
        x=x/2;
        y=y*2;
        
    }
    printf("%d",s);

}