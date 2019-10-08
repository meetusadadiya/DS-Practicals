#include <stdio.h>

void main()
{
    int arr[100], pos, c, n;
    printf("Enter number of elements in arr\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (c = 0; c < n; c++)
        scanf("%d", &arr[c]);
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &pos);
    if (pos >= n + 1)
        printf("Deletion not possible.\n");
    else
    {
        for (c = pos - 1; c < n - 1; c++)
            arr[c] = arr[c + 1];
        printf("Resultant arr:\n");
        for (c = 0; c < n - 1; c++)
            printf("%d\n", arr[c]);
    }
}