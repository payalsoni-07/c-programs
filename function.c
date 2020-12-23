//this program is to perform simple operations on two numbers by using switch and funtions.
#include<stdio.h>
#include<conio.h>
int calc(int a, int b);
void main(){
    printf("the sum of a and b is %d ",calc(9,11));
}
int calc(int a, int b){
        char op;
        printf("enter operator:");
        scanf("%c",&op);
        switch(op){
            case '+':
                return a+b;
            case '-':
                return a-b;
            case '*':
                return a*b;
            case '/':
                return a/b;
            case '%':
                return a%b;
        }
    }