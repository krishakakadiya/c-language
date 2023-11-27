#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int rem(int a, int b)
{
    return a % b;
}


int main()
{
    int a, b, c, ans;

    while (c != 0)
    {
    printf("\nenter 1st digit:");
    scanf("%d", &a);
    printf("enter 2nd digit:");
    scanf("%d", &b);

    printf("1)addition:\n");
    printf("2)subtraction:\n");
    printf("3)multiplication:\n");
    printf("4)division:\n");
    printf("5)remainder:\n");
    printf("0)exit:\n");

    printf("enter your choice:");
    scanf("%d", &c);

    

        switch (c)
        {
        case 1:
            printf("addition:%d", ans = sum(a, b));
            break;
        case 2:
            printf("subtraction:%d", ans = sub(a, b));
            break;
        case 3:
            printf("multiplication:%d", ans = mult(a, b));
            break;
        case 4:
            printf("division:%d", ans = div(a, b));
            break;
        case 5:
            printf("reminder:%d", ans = rem(a, b));
            break;
        case 0:
            break;
        default :
            printf("invalid  input!!");
        }
    }
}
