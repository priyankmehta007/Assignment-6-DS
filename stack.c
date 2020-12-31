

#include<stdio.h>
int stack[50], top = -1, size;
void push(int x);
void pop();
void display();
int main()
{
printf("Enter the size of the stack: ");
scanf("%d", &size);
push(10);
push(20);
push(30);
push(40);
push(50);
display();
push(60);
pop();
display();
return 0;
}
void push(int x)
{
if(top == size - 1)
{
printf("Overflow\n");

return;
}
stack[++top] = x;
}
void pop()
{
if(top == -1)
{
printf("Underflow\n");
return;
}
int x = stack[top--];
printf("Deleted item: %d\n", x);
}
void display()
{
int i;
if(top == -1)
{
printf("No element to display\n");
return;
}
for(i = top; i >= 0; i--)
{
printf("----\n");
printf("|%d|\n", stack[i]);
}
printf("----\n");
}
