//program to print numbers from 1 to 80 separated by tab, 8 numbers per line.
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,n=1;
    for (i=1;i<=10;i++){
        for(j=1;j<=8;j++){
            printf("%d\t",n++);
        }
        printf("\n");
    }
}