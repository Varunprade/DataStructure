#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int arr[SIZE];
int rear=-1;
int front=-1;
void enqueue()
{
int add;
if(rear==SIZE-1)
{
printf("OVERFOLW\n");
}
else{
if(front==-1)
front=0;
printf("Enter the element to insert:");
scanf("%d",&add);
rear++;
arr[rear]=add;
}}

void dequeue()
{
    int add;
    if(rear==-1)
    {
        printf("UNDERFLOW\n");
    }
    else{
        add=arr[front];
        printf("%d is deleted",add);
        front++;
    }
}
void display()
{
    int i;
    if(front==-1)
{
    printf("Queue is empty\n");
}
else{
    for(i=front;i<=rear;i++)
        printf("%d\n",arr[i]);
}}
void main()
{
int c;
while(1)
{
    printf("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
    printf("\nEnter the choice:");
    scanf("%d",&c);
switch(c)
{
    case 1:enqueue();
    break;
    case 2:dequeue();
    break;
    case 3:display();
    break;
    case 4:exit(0);
    default:
        printf("Enter a correct value");
}}}




