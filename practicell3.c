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

void InsertLast(PPNODE First, int no)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn-> data = no;
    newn-> next = NULL;

    if(*First == 0)
    {
        *First = newn;
    }
    else
    {
        temp = *First;
        while(temp->next != 0)
        {
            temp = temp-> next;
        }
        temp->next = newn;
    }
}

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*First == 0)
    {
        *First = newn;
    }
    else
    {
        newn-> next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d | -> ", First->data);
        First = First -> next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First= First-> next;
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iChoice = 1;
    int iValue = 0;

    while(iChoice != 0)
    {
        printf("\nMenu:\n");
        printf("1. Insert at First\n");
        printf("2. Insert at Last\n");
        printf("3. Display\n");
        printf("4. Count\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter value to insert at first: ");
                scanf("%d", &iValue);
                InsertFirst(&Head, iValue);
                break;

            case 2:
                printf("Enter value to insert at last: ");
                scanf("%d", &iValue);
                InsertLast(&Head, iValue);
                break;

            case 3:
                Display(Head);
                break;

            case 4:
                iRet = Count(Head);
                printf("Number of nodes are: %d\n", iRet);
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please enter again.\n");
                break;
        }
    }

    return 0;
}
