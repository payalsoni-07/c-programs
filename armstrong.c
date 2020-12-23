//a program to find armstrong numbers.
#include<stdio.h>
#include<conio.h>
void main(){
    int i,r,n,s;
    for(i=1;i<1000;i++){
        n=i;
        s=0;
        while(n>0){
            r=n%10;
            n=n/10;
            s=s+r*r*r;
        }
        if(i==s){
            printf(" %d is armstrong \n",i);
        }
    }
}