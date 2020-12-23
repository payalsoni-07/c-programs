//this program is to convert days into years and weeks.
#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("enter the number of days.");
    scanf("%d",&a);
    printf("years: %d ",a/365);
    printf("weeks: %d ",(a%365)/7);
    printf("days: %d ",(a%365)%7);
}
