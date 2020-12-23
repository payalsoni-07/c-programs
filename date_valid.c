//program to check whether a date is valid or not between 1850 to 2050.
#include<stdio.h>
#include<conio.h>
void main(){
    int d,m,y;
    printf("enter a date in dd/mm/yyyy format :");
    scanf("%d/%d/%d",&d,&m,&y);
    if(y>=1850 && y<=2050){
        if((m==(1||3||5||7||8||10||12))&&d<=31){
            printf("date is valid");
        }
        else if((m==(4||6||9||11))&&d<=30){
            printf("date is valid");
        }
        else if(m==2){
            if(y%4 ==0||(y%400==0&&y%100==0)){
                if(d<=29){
                    printf("date is valid");
                }
                else{
                    printf("date is invalid");
                }
            }
            else if(d<=28){
                printf("date is valid");
            }
        }
        else{
            printf("date is invalid");
        }
    }
    else{
        printf("date is invalid");
    }

}