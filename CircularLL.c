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
