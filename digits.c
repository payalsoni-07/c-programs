//this program to find number of digits in a given number.
#include<stdio.h>
#include<conio.h>

void main(){
int n,count=0;
printf("enter a number: ");
scanf("%d",&n);
if(n==0){
    printf("number of digits in the given number is 1 :");
}
else{
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("number of digits in the given number is %d :",count);
}
}