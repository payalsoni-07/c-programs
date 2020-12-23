/* daimond pattern
      1
     232
    34543
   4567654
  567898765
   4567654
    34543
     232
      1
*/
#include<stdio.h>
#include<conio.h>
void main(){
  int i,j,p,q;
  for(i=1;i<=9;i++){
      p=i;
      q=10-i;
      for(j=1;j<=9;j++){
          if(i<=5){
              if(j>=6-i&&j<5){
                  printf("%d",p++);
              }
              else if(j>=5&&j<=4+i){
                  printf("%d",p--);
              }
              else{
                  printf(" ");
              }
          }
          else{
              if(j>=i-4&&j<5){
                  printf("%d",q++);
              }
              else if(j<=14-i&&j>=5){
                  printf("%d",q--);
              }
              else{
                  printf(" ");
              }
          }
      }
      printf("\n");
  }  
}

