#include<iostream>
using namespace std;

struct node 
{
    int data;
    node *next;
    node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL 
{
private:
    PNODE First;
    int iCount;

public:
    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL() 
{
    cout << "Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

void DoublyLL::Display() 
{
    PNODE temp = First;
    while (temp != NULL) 
    {
        cout << "|" << temp->data << "| <=> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int DoublyLL::Count() 
{
    return iCount;
}

void DoublyLL::InsertFirst(int No) 
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (iCount == 0) 
    {
        First = newn;
    } 
    else 
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    iCount++;
}

void DoublyLL::InsertLast(int No) 
{
    PNODE newn = new NODE;
    PNODE temp = First;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (iCount == 0) 
    {
        First = newn;
    } 
    else 
    {
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

void DoublyLL::InsertAtPos(int No, int iPos) 
{
    if (iPos < 1 || iPos > iCount + 1) 
    {
        cout << "Invalid Position\n";
        return;
    }

    if (iPos == 1) 
    {
        InsertFirst(No);
    } 
    else if (iPos == iCount + 1) 
    {
        InsertLast(No);
    } 
    else 
    {
        PNODE newn = new NODE;
        PNODE temp = First;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for (int i = 1; i < iPos - 1; i++) 
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}
