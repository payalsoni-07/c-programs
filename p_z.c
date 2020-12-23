/* pyramid pattern
123456789
 1234567
  12345
   123
    1
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,p;
    for(i=1;i<=5;i++){
        p=1;
        for(j=1;j<=9;j++){
            if(j>=i&&j<=10-i){
                printf("%d",p++);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}