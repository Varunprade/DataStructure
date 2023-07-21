#include<stdlib.h>
#include <stdio.h>
void create();
struct node
{
        int data;
        struct node *next;
};
struct node *head,*tail,*new;
void main()
{
    create();}
    void create()
 {
     int value;
     new=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&value);
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
         tail=new;
         tail->next=head;
     }
 }
