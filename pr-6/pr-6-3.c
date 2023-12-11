#include<stdio.h>

int main()
{
    int i;
    char name1[50];
    char name2[50];
    printf("enter name 1:");
    scanf("%s",&name1);
    printf("enter name 2:");
    scanf("%s",&name2);

    printf("%s\n",name1);
    printf("%s\n",name2);
    for(i=0;i<=NULL;i++)
    {
        if(name1[i]==name2[i])
    {
        printf("both name are equal!!");
    }
    else{
        printf("both name are not equal!!");
    }
    }
    
}