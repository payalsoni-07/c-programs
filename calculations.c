/* This program can calculate simple calculations on two numbers.  */
#include<conio.h>
#include<stdio.h>
int tri_area();
int rect_area();
int lcm();
int simple_calc();
int hcf();
void main(){
    int t;
    printf("what do you want to calculate. I can calculate simple problems given below in the list.\n");
    printf(" 1: Area of triangle. \n 2: Area of rectangle.\n 3: Addition, Subtraction, Multiplication, Division, or Remainder.\n 4: LCM \n 5: HCF ");
    printf("\n enter type no. of problems which are given below.");
    scanf("%d",&t);
    switch (t){
        case 1:
            tri_area();
            break;
        case 2:
            rect_area();
            break;
        case 3:
            simple_calc();
            break;
        case 4:
            lcm();
            break;
        case 5:
            hcf();
            break;
    }
}
int tri_area(){
    int l,b;
    printf("enter length of side and perpendicular.");
    scanf("%d%d",&l,&b);
    printf("area of triangle is : %d",(l*b)/2);
}
int rect_area(){
    int l,b;
    printf("enter length and breadth of rectangle.");
    scanf("%d%d",&l,&b);
    printf("area of rectangle is : %d",l*b);
}
int simple_calc(){
    int x,y;
    printf("enter two numbers.");
    scanf("%d%d",&x,&y);
    printf("calulation is : %d",x+y);
}
int lcm(){
    int x,y, i=1;
    printf("enter two numbers.");
    scanf("%d%d",&x,&y);
    while(i>=1){
    if(i%x==0&&i%y==0){
        printf("lcm is : %d",i);
        break;
    }
    else{
        i++;
    }
    }
}
int hcf(){
    int x,y,i;
    int s=1;
    printf("enter two numbers for finding their HCF \n");
    scanf ("%d%d",&x,&y);
    
    for(i=1; i<=x || i<=y;i++)
    { 
        if(x%i==0 && y%i==0){
           s=i;
        }
    }
    printf("hcf is : %d",s);
}