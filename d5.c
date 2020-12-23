/* daimond pattern
      5
     545    
    54345
   5432345
  543212345
   5432345
    54345
     545
      5
*/
#include<stdio.h>
#include<conio.h>
void main(){
  int i,j,p;
  for(i=1;i<=9;i++){
      p=5;
      for(j=1;j<=9;j++){
          if(i<=5){
              if(j>=6-i&&j<5){
                  printf("%d",p--);
              }
              else if(j>=5&&j<=4+i){
                  printf("%d",p++);
              }
              else{
                  printf(" ");
              }
          }
          else{
              if(j>=i-4&&j<5){
                  printf("%d",p--);
              }
              else if(j<=14-i&&j>=5){
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

