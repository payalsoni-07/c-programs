/* pyramid pattern
        1
       12
      123
     1234
    12345

*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,p;
    for(i=1;i<=5;i++){
        p=1;
        for(j=1;j<=5;j++){
            if(j>=6-i){
                printf("%d",p++);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}