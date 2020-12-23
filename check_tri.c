//a c program to check if it is possible to make a triangle with given lengths of sides.
#include<stdio.h>
#include<conio.h>
void main (){
    float a,b,c;
    printf("enter the length of all three sides.");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(c+a)>b){
        printf("making  a triangle is possible with given length of sides.");
    }
    else{
        printf("triangle is not possible with given sides.");
    }
}