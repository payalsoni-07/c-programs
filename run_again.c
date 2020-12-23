#include<stdio.h>
#include<conio.h>
void main(){
    int a=10,x,i;
    loop :for(x=1;x<=10;x++){
    printf("%d \n",x);
    }
    printf("enter 1 to print again");
    scanf("%d",&i);
    if(i==1){
        goto loop;
    }
}
