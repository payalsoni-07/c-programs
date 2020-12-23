//a program to print all prime numbers from 1 to 99.
#include<stdio.h>
#include<conio.h>
void main(){
    int n,j,flag=0;
    for(int i=2; i<100; i++){
        n=i;
        for(j=2;j<=n/2;j++){
            if(n%j==0){
                flag =1;
                break;
            }
        }
        if(flag = 0){
            printf("%d is prime.\n",n);
        }
        else{
            continue;
        }
    }
}