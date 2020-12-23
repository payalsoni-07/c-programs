//a program to input 10 numbers and find the largest.
#include<stdio.h>
#include<conio.h>
void main(){
    int a[10],i,max;
    printf("enter 10 numbers.");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<10;i++){
        if(a[i]>max){
            max=a[i];
        }
        else{
            max=max;
        }
    }
    printf("\n %d is maximum: ",max);
}