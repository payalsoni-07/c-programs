/* pyramid pattern
1
22
333
4444
55555
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=i){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}