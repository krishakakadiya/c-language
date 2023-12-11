#include<stdio.h>

int main()
{
    char name1[50];
    char name[50];
    printf("enter your name:");
    scanf("%s",&name);

    strrev(name);
    
    if(name==name1)
    {
        printf("this string is palindrom!!");
    }
    else
    {
        printf("this string is not palindrom!!");
    }
}