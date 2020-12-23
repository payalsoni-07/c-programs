/* pyramid pattern
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5 

*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k,p;
    for(i=1;i<=5;i++){
        k=1;
        p=1;
        for(j=1;j<=9;j++){
            if(j>=6-i&&j<=4+i&&k){
                printf("%d",p++);
                k=0;
            }
            else{
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}