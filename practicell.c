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

void InsertFirst(PPNODE First, int No)
{
    PNODE NewNode = NULL;

    NewNode = (PNODE) malloc (sizeof(NODE));

    NewNode-> Data = No;
    NewNode-> Next = NULL;

    if(*First == NULL)
    {
        *First = NewNode;
    }
    else
    {
        NewNode -> next = *First;
        *First = NewNode;
    }
}

int main()
{
    PNODE Head = Null;
    int iRet = 0;

    InsertFirst(&Head, 11);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 101);
    
    return 0;
}