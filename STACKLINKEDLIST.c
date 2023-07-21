#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}*new,*temp,*top;
void push()
{
i
nt ele;
new=(struct node*)malloc(sizeof(struct node));
printf("Enter the element to insert:");
scanf("%d",&ele);
if(top==NULL)
{
new->data=ele;
new->next=NULL;
top=new;
}
else
{
new->data=ele;
new->next=top;
top=new;
}
}
void pop()
{
if(top==NULL)
{
printf("\nStack is empty!!");
}
else
{
top=top->next;
}
}
void display()
{

    new=top;
    if(new == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nvalues are:\n");
    while (new!=NULL)
        {
            printf("\n%d",new->data);
            new = new -> next;
        }
    }
}
int main()
{
int ch;
while(1)
{
printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
printf("\n\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
default: printf("\nWrong Choice!!");
}
}
}

