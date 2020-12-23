/* pyramid pattern
    1
   123
  12345
 1234567
123456789
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,p;
    for(i=1;i<=5;i++){
        p=1;
        for(j=1;j<=9;j++){
            if(j>=6-i&&j<=4+i){
                printf("%d",p++);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}