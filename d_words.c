//C program to get a number upto 6 digits. and print it in words.
// example: 123 : one two three

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char n[6],a;
    int l;
    printf("enter a number upto 6 digits:");
    scanf("%s",&n);
    l=strlen(n);
    for(int i=0;i<l;i++){
        a=n[i];
        switch (a){
            case '1':
             printf("one ");
             break;
            case '2':
             printf("two ");
             break;
            case '3':
             printf("three ");
             break;
        }
    }

}
