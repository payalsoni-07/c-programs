/* pyramid pattern
    1
   222
  33333
 4444444
555555555 

*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j>=6-i&&j<=4+i){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}