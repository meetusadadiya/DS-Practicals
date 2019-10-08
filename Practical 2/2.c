#include <stdio.h>

void main()
{
    int x, y, t, *a, *b;
    printf("Enter two integers\n");
    scanf("%d%d", &x, &y);
    printf("Before Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
    a = &x;
    b = &y;
    t = *b;
    *b = *a;
    *a = t;
    printf("After Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
}