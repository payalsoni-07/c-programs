/*
****
***
**
*
**
***
****
*****
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=2*n-2;i++){
        for(j=1;j<=n;j++){
            if(i<=n-1){
                if(j<=n-i){
                    printf("* ");
                }
                else{
                    printf(" ");
                }
            }
            else{
                if(j<=i+2-n){
                    printf("* ");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
