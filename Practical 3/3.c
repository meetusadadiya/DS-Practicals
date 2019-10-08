#include <stdio.h>

void main()
{
    int i, n, j, k, l, num, arr[10];
    printf("\n Enter the number of elements in the array:");
    scanf("%d", &n);
    printf("\n Enter the array elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\n Enter the number to be inserted: ");
    scanf("%d", &num);
    for (k = 0; k < n; k++)
    {
        if (arr[k] > num)
        {
            for (j = n - 1; j >= k; j--)
            {
                arr[j + 1] = arr[j];
                arr[k] = num;
            }
        }
        else if (k == n - 1)
            arr[k + 1] = num;
    }
    n++;
    printf("\n The array after insertion of %d is: ", num);
    for (l = 0; l < n; l++)
        printf("%d ", arr[l]);
}