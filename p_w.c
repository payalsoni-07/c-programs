/* pyramid pattern
    5
   545
  54345
 5432345
543212345
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,p;
    for(i=1;i<=5;i++){
        p=5;
        for(j=1;j<=9;j++){
            if(j>=6-i&&j<5){
                printf("%d",p--);
            }
            else if(j>=5&&j<=4+i){
                printf("%d",p++);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}