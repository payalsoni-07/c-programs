//C program to find nature of roots of quadratic equation.
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c,d;
    printf("enter the co-efficients of x^2 and x and constant term :");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c; // d is Discriminant of quadratic equation
    if(d>0){
        printf("roots are real and distinct.");
    }
    else if(d==0){
        printf("roots are real and equal ");
    }
    else{
        printf("roots are imaginary.");
    }
}