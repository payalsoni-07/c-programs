/* pyramid pattern
55555
4444
333
22
1

*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=6-i){
                printf("%d",6-i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}