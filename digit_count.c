//a number and a digit is enter, count the number of times of the digits occurs in the number.
#include<stdio.h>
#include<conio.h>
void main(){
    int n,d,r,count=0;
    printf("enter a number and digit");
    scanf("%d%d",&n,&d);
    while(n!=0){
        r=n%10;
        n=n/10;
        if(r==d){
            count++;
        }
    }
    printf("%d times occur",count);
}