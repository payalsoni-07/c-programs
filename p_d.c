/* pyramid pattern
2
3 4
4 5 6
5 6 7 8 
6 7 8 9 10
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=i){
                printf("%d ",i+j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}