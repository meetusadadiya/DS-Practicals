#include <stdio.h>
struct student
{
    char name[20];
    int sub1;
    int sub2;
    int sub3;
};
void main()
{
    int j;
    struct student s[10];
    int i, total = 0, avg = 0;
    // clrscr();
    for (i = 0; i <= 2; i++)
    {
        printf("\n\nEnter Name of Student %d :", i + 1);
        scanf("%s", &s[i].name);

        printf("\nEnter Marks of All Subjects :");
        scanf("%d%d%d", &s[i].sub1, &s[i].sub2, &s[i].sub3);

        total = s[i].sub1 + s[i].sub2 + s[i].sub3;
        avg = total / 3;
        printf("\nMarks of All Subjects : \n Subject 1: %d \n Subject 2: %d \n Subject 3: %d", s[i].sub1, s[i].sub2, s[i].sub3);
        printf("\nTotal marks of %s is = %d", s[i].name, total);
        printf("\nTotal average of %s is = %d", s[i].name, avg);
    }
}