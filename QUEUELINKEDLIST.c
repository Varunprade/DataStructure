#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*new,*temp,*rear,*front;
void enqueue();
void dequeue();
void display();
void main(){
enqueue();
dequeue();
display();
}
void enqueue()
{
int value,size,i;
printf("Enter the size:");
scanf("%d",&size);
for(i=1;i<=size;i++)
{
new=(struct node*)malloc(sizeof(struct node));
printf("Enter the value to insert:");
scanf("%d",&value);
new->data=value;
new->next = NULL;
if(rear==NULL)
{
front=new;
rear=new;
}
else
{
rear->next=new;
rear=new;
}
}}
void dequeue()
{
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        front=front->next;
    }
}
void display()
{
    if(front==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
