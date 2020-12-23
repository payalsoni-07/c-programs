/* Heart pattern in C */
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    printf("\n\n");
    for(i=1;i<=8;i++){
        for(j=1;j<=11;j++){
            if(i>3){
                if(j>=i-2&&j<=14-i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else{
                if((j>=4-i&&j<=3+i)||(j>=9-i&&j<=8+i)){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
} 