/* daimond pattern
      1
     123
    12345
   1234567
  123456789
   1234567
    12345
     123
      1
*/
#include<stdio.h>
#include<conio.h>
void main(){
  int i,j,p;
  for(i=1;i<=9;i++){
      p=1;
      for(j=1;j<=9;j++){
          if(i<=5){
              if(j>=6-i&&j<=4+i){
                  printf("%d",p++);
              }
              else{
                  printf(" ");
              }
          }
          else{
              if(j>=i-4&&j<=14-i){
                  printf("%d",p++);
              }
              else{
                  printf(" ");
              }
          }
      }
      printf("\n");
  }  
}
