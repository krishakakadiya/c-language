#include<stdio.h>


void cube(int a)
{
    printf("%d",a*a*a);
}
main()
{
    int a;
    printf("enter any number to find that cube:");
    scanf("%d",&a);
    cube(a);

}