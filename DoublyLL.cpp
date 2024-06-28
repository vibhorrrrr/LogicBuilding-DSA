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
