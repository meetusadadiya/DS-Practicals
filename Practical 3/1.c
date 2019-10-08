#include <stdio.h>

void main()
{
    int array[5];
    int i, j, temp;
    printf("Enter the values of 5 elements \n");
    printf("Enter the elements one by one \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < (5 - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("\nSorted array is...\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
}