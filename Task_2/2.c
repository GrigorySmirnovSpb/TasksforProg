#include <stdio.h>

int main()
{
    int a, b = 0;
    printf("Enter 2 number\n");
    scanf("%d %d", &a, &b);
    printf("a: %d\nb: %d\n", a, b);
    if (a != b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    printf("After swap:\na: %d\nb: %d\n", a, b);
    return 0;
}