/* daimond pattern
        1
       222
      33333
     4444444
    555555555
     4444444
      33333
       222
        1
*/
#include<stdio.h>
#include<conio.h>
void main(){
  int i,j;
  for(i=1;i<=9;i++){
      for(j=1;j<=9;j++){
          if(i<=5){
              if(j>=6-i&&j<=4+i){
                  printf("%d",i);
              }
              else{
                  printf(" ");
              }
          }
          else{
              if(j>=i-4&&j<=14-i){
                  printf("%d",10-i);
              }
              else{
                  printf(" ");
              }
          }
      }
      printf("\n");
  }  
}
