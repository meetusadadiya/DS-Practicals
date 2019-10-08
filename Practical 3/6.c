#include <stdio.h>
int size;
void printArray(int arr[]);
void rotateByOne(int arr[]);
void main()
{
    int i, c;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements array: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("Enter number of times to right rotate: ");
    scanf("%d", &c);
    c = c % size;
    printf("Array before rotationn");
    printArray(arr);
    for (i = 1; i <= c; i++)
        rotateByOne(arr);
    printf("\n\nArray after rotation\n");
    printArray(arr);
}
void rotateByOne(int arr[])
{
    int i, last;
    last = arr[size - 1];
    for (i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
void printArray(int arr[])
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}