//find sum x+x^2+x^3+x^4......
   #include<stdio.h>
   #include<conio.h>
   void main(){
      int n,i,x,a,s=0;
      printf("enter the value of x:");
      scanf("%d",&x);
      printf("enter the number of terms.");
      scanf("%d",&n);
      a=x;
      for(i=1;i<=n;i++){
         s=s+x;
         x=x*a;
      }
      printf("%d",s);
   } 