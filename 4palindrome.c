//4 digit palindrome
#include<stdio.h>
#include<conio.h>
void main(){
    int n,rev,r,a,i;
    for(n=1000;n<=9999;n++){
        a=n;
        i=n;
        rev=0;
        while(i!=0){
            r=i%10;
            rev=rev*10+r;
            i=i/10;
        }
        if(rev==a){
            printf("%d is paindrome. \n",a);
            continue;
        }
    }
}