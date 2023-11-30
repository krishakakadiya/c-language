#include<stdio.h>

int main(){

    char name[50];
    char *np;

     np=&name;

    printf("enter anything:");
    scanf("%[^\n]",&name);
}