/* pyramid pattern
555555555
 4444444
  33333
   222
    1
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=9;j++){
            if(j>=i&&j<=10-i){
                printf("%d",6-i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}