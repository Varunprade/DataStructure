#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*new,*new1,*temp;
void beginsert ();
void lastinsert ();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void beginsert()
{
    int value;
    new = (struct node *) malloc(sizeof(struct node *));
    if(new == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value\n");
        scanf("%d",&value);
        new->data = value;
        new->next = head;
        head = new;
        printf("\nNode inserted");
    }

}
void lastinsert()
{
    int value;
    new = (struct node*)malloc(sizeof(struct node));
    if(new == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value:\n");
        scanf("%d",&value);
        new->data = value;
        if(head == NULL)
        {
            new -> next = NULL;
            head = new;
            printf("\nNode inserted");
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = new;
            new->next = NULL;
            printf("\nNode inserted");

        }
    }
}
void randominsert()
{
    int i,loc,value;
    new = (struct node *) malloc (sizeof(struct node));
    if(new == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter element value");
        scanf("%d",&value);
        new->data = value;
        printf("\nEnter the location after which you want to insert ");
        scanf("\n%d",&loc);
        temp=head;
        for(i=0;i<loc;i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }

        }
        new ->next = temp ->next;
        temp ->next = new;
        printf("\nNode inserted");
    }
}
void begin_delete()
{
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        new = head;
        head = new->next;
        new->next=NULL;
        printf("\nNode deleted from the begining ...\n");
    }
}
void last_delete()
{
    if(head == NULL)
    {
        printf("\nlist is empty");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }

    else
    {
        new = head;
        while(new->next != NULL)
        {
            new1 = new;
            new = new ->next;
        }
        new1->next = NULL;
        free(new);
        printf("\nDeleted Node from the last ...\n");
    }
}
void random_delete()
{
    int loc,i;
    printf("\n Enter the location of the node after which you want to perform deletion \n");
    scanf("%d",&loc);
    new=head;
    for(i=0;i<loc;i++)
    {
        new1 = new;
        new = new->next;

        if(new == NULL)
        {
            printf("\nCan't delete");
            return;
        }
    }
    new1 ->next = new ->next;
    free(new);
    printf("\nDeleted node %d ",loc+1);
}
void display()
{
    new = head;
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

    void main ()
{
    int choice =0;
    while(1)
    {
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Show\n8.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            beginsert();
            break;
            case 2:
            lastinsert();
            break;
            case 3:
            randominsert();
            break;
            case 4:
            begin_delete();
            break;
            case 5:
            last_delete();
            break;
            case 6:
            random_delete();
            break;
            case 7:
            display();
            break;
            case 8:
            exit(0);
            break;
            default:
            printf("Please enter valid choice..");
        }
    }
}

