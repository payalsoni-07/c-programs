//c program to read an amount and break the amount into smallest possible number of bank notes.
//possible notes are 10,20,50 and 100
#include<stdio.h>
#include<conio.h>
void main(){
    int amt;
    printf("enter amount");
    scanf("%d",&amt);
    printf("100 Rs notes are %d :",amt/100);
    printf("50 Rs. notes are %d :",(amt%100)/50);
    printf("20 Rs. notes are %d :",((amt%100)%50)/20);
    printf("10 Rs. notes are %d :",(((amt%100)%50)%20)/10);
}