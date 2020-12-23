/* pyramid pattern
    5
    54
    543
    5432
    54321
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=i){
                printf("%d ",6-j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}