/* pyramid pattern
    5
    44
    333
    2222
    11111
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=i){
                printf("%d ",6-i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}