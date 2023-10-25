#include<stdio.h>

void div(int a)
{
    if(a%3==0 && a%5==0)
    {
        printf("%d is divided by both 3 and 5",a);
    }
    else
    {
        printf("%d is not divided by both 3 and 5",a);
    }
}
main()
{
    int a;
    printf("enter any number :");
    scanf("%d",&a);

    div(a);


}