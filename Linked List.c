#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
 
void main()
{
    struct node
    {
        int num;
        struct node *ptr;
    };
    typedef struct node NODE;
 
    NODE *head=0, *newnode,*newnode1, *temp = 0;
    int count = 0;
    int choice = 1;
    
 
    while (choice)
    {
        newnode  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &newnode-> num);
        if (head != 0)
        {
            temp->ptr = newnode;
            temp = newnode;
        }
        else
        {
        	head=temp= newnode;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &choice);
 
    }
    temp->ptr=0;
  	temp=head;
    printf("\n status of the linked list is\n");
    while (temp != 0)
    {
        printf("%d=>", temp->num);
        count++;
        temp = temp -> ptr;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);
    
    printf("\n");
    printf("\n INSERTION OPERATION \n");
    newnode1  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &newnode1-> num);
        
        newnode1->ptr=head;
        head=newnode1;
        
    temp=head;
     printf("\n status of the linked list is\n");
    while (temp != 0)
    {
        printf("%d=>", temp->num);
        temp = temp -> ptr;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count+1);
    
    
    
}
