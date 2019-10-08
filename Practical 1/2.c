#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    int sub1;
    int sub2;
    int sub3;
};
void find(int x);
struct student s[10];
void main()
{
    int j;
    int i, total = 0, avg = 0, x;
    // clrscr();
    for (i = 0; i < 10; i++)
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
REPEAT:
    printf("\nEnter Roll No. of Student : ");
    scanf("%d", &x);
    find(x);
    goto REPEAT;
}

void find(int x)
{
    int total = s[x - 1].sub1 + s[x - 1].sub2 + s[x - 3].sub3;
    int avg = total / 3;
    printf("\n\nName of Student with Roll no. %d : %s", x, s[x - 1].name);
    printf("\nMarks of All Subjects : \n Subject 1: %d \n Subject 2: %d \n Subject 3: %d", s[x - 1].sub1, s[x - 1].sub2, s[x - 1].sub3);
    printf("\nTotal marks = %d", s[x - 1].name, total);
    printf("\nTotal average = %d", s[x - 1].name, avg);
}