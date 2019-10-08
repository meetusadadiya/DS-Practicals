#include <stdio.h>

void main()
{
    int x, y, t;
    printf("Enter two integers\n");
    scanf("%d%d", &x, &y);
    printf("Before Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
    t = x;
    x = y;
    y = t;
    printf("After Swapping\nFirst integer = %d\nSecond integer = %d\n", x, y);
}