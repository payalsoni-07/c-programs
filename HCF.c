#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y,i;
    int s=1;
    printf("enter two numbers for finding their HCF \n");
    scanf ("%d%d",&x,&y);
    
    for(i=1; i<=x || i<=y;i++)
    { 
        if(x%i==0 && y%i==0){
           s=i;
        }
    }
    printf("hcf is : %d",s);
}
