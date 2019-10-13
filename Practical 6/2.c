#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
struct stack
{
    int top;
    int arr[MAX];
};
void push(struct stack *, int);
int pop(struct stack *);
void display(struct stack *);
int main()
{
    struct stack s;
    int ch, num;
    s.top = -1;
    while (1)
    {
        printf("\nStack - Menu");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter your choice?");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter number to push?");
            scanf("%d", &num);
            push(&s, num);
            break;
        case 2:
            num = pop(&s);
            printf("Popped element = %d", num);
            break;
        case 3:
            display(&s);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice !");
        }
        getch();
    }
}
void push(struct stack *s, int x)
{
    if (s->top == MAX - 1)
    {
        printf("\nStack full !Overflow.");
        return;
    }
    s->arr[++(s->top)] = x;
}
int pop(struct stack *s)
{
    if (s->top == -1)
    {
        printf("\nStack empty !Underflow.");
        return -1;
    }
    return (s->arr[s->top--]);
}
void display(struct stack *s)
{
    int t;
    if (s->top == -1)
    {
        printf("\nStack empty !");
        return;
    }
    for (t = s->top; t >= 0; t--)
        printf("% d\t", s->arr[t]);
}