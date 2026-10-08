#include <stdio.h>
int a[10], top = -1, val, max = 10, i;
void push()
{
    if(top == max - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        printf("Enter the element to be pushed: ");
        scanf("%d", &val);
        top++;
        a[top] = val;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The element %d is popped", a[top]);
        top--;
    }
}
void display()
{
    if(top == -1)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The elements in the stack are:\n");
        for(i = 0; i <= top; i++)
        {
            printf("%d\n", a[i]);
        }
    }
}
void peek()
{
    if(top == -1)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The element at the top of the stack is %d\n", a[top]);
    }
}
int main()
{
    int choice, ext = 0;
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. PEEK");
        printf("\n5. EXIT");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;
            default:
                printf("EXITED SUCCESSFULLY");
        }
    } while(choice!=5);
    return 0;
}