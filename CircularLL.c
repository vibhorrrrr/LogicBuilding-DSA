#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(PNODE));

    newn -> data = No;
    newn -> next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
    (*Last)->next = *First;     // or (*Last)->next = newn

}

void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(PNODE));

    newn -> data = No;
    newn -> next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next=newn;
        *Last = newn;
    }
    (*Last)->next = *First;     // or (*Last)->next = newn

}

void Display(PNODE First, PNODE Last)
{
    if((First==NULL)&&(Last==NULL))
    {
        printf("LinkedList is empty\n");
        return;
    }

    do
    {
        printf("| %d | -> ", First->data);
        First = First -> next;
    }while (First != Last->next);

    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCount = 0;

    if((First==NULL)&&(Last==NULL))
    {
        return 0;
    }

    do
    {
        iCount++;
        First = First -> next;
    }while (First != Last->next);
   
    return iCount;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL)) // Empty LL
    {
        return;
    }
    else if(*First == *Last)   // Single node
    {
        free(*First);   // or free(*Last);
        *First = NULL;
        *Last = NULL;
    }
    else    // More than one node
    {
        *First=(*First)->next;   // (*Last) -> next = *First->next;
        free((*Last)->next);       // free(*First)
        (*Last)->next=*First;    // *First = (*Last)->next;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = NULL;
    if((*First == NULL) && (*Last == NULL)) // Empty LL
    {
        return;
    }
    else if(*First == *Last)   // Single node
    {
        free(*First);   // or free(*Last);
        *First = NULL;
        *Last = NULL;
    }
    else    // More than one node
    {
        temp = *First;
        while(temp->next!=*Last)
        {
            temp = temp -> next;
        }
        free(*Last);
        *Last = temp;

        (*Last)->next = *First;
    }
}

void InsertAtPos(PPNODE First, PPNODE Last, int No, int iPos)
{
    int i = 0;
    int iLength = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    iLength = Count(*First, *Last);

    if((iPos<1) || (iPos>iLength+1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First, Last, No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First, Last, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
        temp = *First;

        for(i=1; i<iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE First, PPNODE Last, int iPos)
{
    int i = 0;
    int iLength = 0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    iLength = Count(*First, *Last);

    if((iPos<1) || (iPos>iLength))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First, Last);
    }
    else
    {
        temp1 = *First;

        for(i=1; i<iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        
        temp1->next = temp2->next;
        free(temp2);
    }
}
