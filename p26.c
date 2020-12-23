/* pyramid pattern
567898765
 4567654
  34543
   232
    1
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,p;
    for(i=1;i<=5;i++){
        p=6-i;
        for(j=1;j<=9;j++){
            if(j>=i&&j<5){
                printf("%d",p++);
            }
            else if(j>=5&&j<=10-i){
                printf("%d",p--);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}