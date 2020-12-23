//palindrome or not.
#include<stdio.h>
#include<conio.h>
void main(){
    int n,rev=0,r,a;
    printf("enter a number");
    scanf("%d",&n);
    a=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==a){
        printf("is palindrome");
    }
    else{
        printf("not palindrome");
    }
}