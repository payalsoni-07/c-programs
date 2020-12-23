//a program to find out the value of x raised to the power of y, where x and y are positive integers.
#include<stdio.h>
#include<conio.h>
void main(){
    int x,y,s=1;
    printf("enter a number.");
    scanf("%d",&x);
    printf("enter a number for power.");
    scanf("%d",&y);
    for(int i=1; i<=y;i++){
        s=s*x;
    }
    printf("%d",s);
}