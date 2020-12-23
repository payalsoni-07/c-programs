/*pattern :
      *
      *  *
      *  *  *
      *  *
      *
 */
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,x;
  printf("enter rows :");
  scanf("%d",&x);
  for(i=1;i<=x;i++){
    for(j=1;j<=(x+1)/2;j++){
        if(i<=(x+1)/2&&j<=i)
        {
            printf("*");
        }
        else if(i>(x+1)/2&&j<=x+1-i){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
  }
}
