#include<stdio.h>

int main()
{
    int y1,i,y2;

    printf("enter year 1:");
    scanf("%d",&y1);
    printf("enter year 2:");
    scanf("%d",&y2);

    for(i=y1;i<y2;i++)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
        
    }
}