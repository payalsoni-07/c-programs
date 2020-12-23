//find sum 1+11+111+1111......
   #include<stdio.h>
   #include<conio.h>
   void main(){
      int n,i,j=1,s=0;
      printf("enter the number of terms.");
      scanf("%d",&n);
      for(i=1;i<=n;i++){
         s=s+j;
         j=(j*10)+1;
      }
      printf("%d",s);
   } 