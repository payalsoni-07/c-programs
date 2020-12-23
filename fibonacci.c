//this program to print a fibonacci series.
#include<stdio.h>
#include<conio.h>
void main(){
    int a=0,b=1;
    int i,n,s=0;
    printf("how many terms do you want to print.");
    scanf("%d",&n);
    printf("your fibonacci series is : \n");
    for(i=1;i<=n;i++){
        printf("%d ",s);
        a=b;
        b=s;
        s=a+b;
    }
}