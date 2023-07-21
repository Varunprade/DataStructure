#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node*prev;
int data;
struct node*next;
}*head,*tail,*new,*temp;
void create();
void infront();
void inend();
void inmiddle();
void delfront();
void delend();
void delmiddle();
void display();
void create()
{
int value;
new=(struct node*)malloc (sizeof(struct node));
printf("Enter the value:");
scanf("%d",&value);
new->prev=NULL;
new->data=value;
new->next=NULL;
if(head==NULL)
{
head=new;
tail=new;
}
else
{
tail->next=new;
new->prev=tail;
tail=new;
}
}
void infront()
{ int value;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Insert the value at beginning:");
    scanf("%d",&value);
    new->data=value;
    new->next=head;
    new->prev=NULL;
    head->prev=new;
    head=new;
}
void inend()
{ int value;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Insert the value at end:");
    scanf("%d",&value);
    new->data=value;
    new->next=NULL;
    tail->next=new;
    new->prev=tail;
    tail=new;
}
void inmiddle()
{ int value,pos,i;
    new=(struct node*)malloc(sizeof(struct node));
    printf("Insert the value at middle:");
    scanf("%d",&value);
    temp=head;
    printf("Enter the position:");
    scanf("%d",&pos);
    for(i=0;i<pos-1;i++)
        temp=temp->next;
    new->data=value;
    new->prev=temp;
    new->next=temp->next;
    temp->next=new;
}
void delfront()
{
    temp=head;
    head=head->next;
    temp->next=NULL;
    head->prev=NULL;
    free(temp);
}
void delend()
{
    temp=tail;
    tail=tail->prev;
    temp->prev=NULL;
    tail->next=NULL;
    free(temp);
}
void delmiddle()
{
    int i,pos;
    temp=head;
    printf("Enter the position:");
    scanf("%d",&pos);
    for(i=0;i<pos-1;i++)
        temp=temp->next;
        temp->next=temp->next->next;
        temp->next->prev=temp;
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }

}
int main()
{
int ch;
while(1)
{
 printf("\n 1.CREATE \n 2.INSERT AT FRONT \n 3.INSERT AT END \n 4.INSERT AT MIDDLE \n 5.DELETE AT FRONT \n 6.DELETE AT END \n 7.DELETE AT MIDDLE \n 8.DISPLAY \n 9.EXIT");
        printf("\n Enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            create();
            break;
        case 2:
            infront();
            break;
        case 3:
            inend();
            break;
        case 4:
            inmiddle();
            break;
        case 5:
            delfront();
            break;
        case 6:
            delend();
            break;
        case 7:
            delmiddle();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("Wrong choice");
            break;
        }
}
}

