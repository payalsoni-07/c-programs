//a program to find LCM of three numbers.
#include<stdio.h>
#include<conio.h>
void main(){
    int x,y,z, i=1;
    printf("enter three numbers.");
    scanf("%d%d%d",&x,&y,&z);
    while(i>=1){
    if(i%x==0&&i%y==0&&i%z==0){
        printf("lcm is : %d",i);
        break;
    }
    else{
        i++;
    }
    }
}
