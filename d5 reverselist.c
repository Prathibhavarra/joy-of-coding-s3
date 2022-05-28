#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int num;
    struct node *link;
}NODE;
void insert(int n,NODE *head);
void display(NODE *head);
void reverse(NODE *head);
NODE *get_node();
int main()
{
    //NODE *first=NULL;
    int n;
    NODE *head;
    head->num = 0;
    head->link = NULL;
    printf("Enter the number of elements to be inserted\n");
    scanf("%d",&n);
    insert(n,head);
    display(head);
    reverse(head);
    display(head);
    return 0;
}
NODE *get_node()
{
    NODE *temp = (NODE*)malloc(sizeof(NODE));
    if(temp==NULL)
    {
        printf("No memory!");
        return NULL;
    }
    return temp;
}
void insert(int n,NODE *head)
{
    
    NODE *new,*temp;
    temp = head;
    for(int i = 0;i < n;i++)
    {
        new = get_node();
        scanf("%d",&new->num);
        temp->link = new;
        temp = new;
        head->num++;
    }
    return;
}
void reverse(NODE *head)
{
    NODE *last = head;
    NODE *temp;
    NODE *present = head->link,*prev=head;
    while(last->link != NULL)
        last = last->link;
    while(present!= NULL)
    {
        temp = present->link;
        present->link = prev;
        prev= present;
        present = temp;
    }
    head->link = last;
}
void display(NODE *head)
{
    NODE *temp = head->link;
    printf("\nThe contents of the linked list are\n");
    for(int i = 0;i < head->num;i++)
    {
        printf("%d ",temp->num);
        temp = temp->link;
    }
}


