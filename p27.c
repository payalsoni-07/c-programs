/* pyramid pattern
543212345
 5432345
  54345
   545
    5
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,p;
    for(i=1;i<=5;i++){
        p=5;
        for(j=1;j<=9;j++){
            if(j>=i&&j<5){
                printf("%d",p--);
            }
            else if(j>=5&&j<=10-i){
                printf("%d",p++);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}