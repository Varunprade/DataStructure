#include <stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node *next;
};
struct node*head,*tail;
int compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
while(head1 != NULL || head2 != NULL)
    {
        if(head1 == NULL)
             return 0;
        if(head2 == NULL)
            return 0;
        if(head1->data != head2->data)
         return 0;
        head1=head1->next;
        head2=head2->next;
    }
    return 1;
}
