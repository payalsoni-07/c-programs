/* pyramid pattern
    1
    2  3
    4  5  6
    7  8  9  10
    11 12 13 14 15

*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,p=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=i){
                printf("%d ",p++);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}