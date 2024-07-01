#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

class DoublyCL
{
private:
    PNODE First;
    PNODE Last;
    int iCount;

public:
    DoublyCL();
    void Display();
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

DoublyCL::DoublyCL()
{
    cout << "Inside Constructor" << endl;
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void DoublyCL::Display()
{
    if(First==NULL && Last == NULL)
    {
        cout<<"Linked list is empty";
        return;
    }
    cout<<"<=> ";
    do
    {
        cout<<"| "<<First->data<<"| <=>";
        First = First -> next;
    } while (Last->next!=First);
    
    cout<<"\n";
}

int DoublyCL::Count()
{
    return iCount;
}

void DoublyCL::InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
}

void DoublyCL::InsertLast(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if ((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    Last->next = First;
    First->prev = Last;

    iCount++;
}

void DoublyCL::InsertAtPos(int No, int iPos)
{
    PNODE temp = NULL;
    temp = First;
    int i=0;
    if(iPos<1||iPos>iCount+1)
    {
        cout<<"Invalid Position\n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE newn = new NODE;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(i=1;i<iPos-1;i++)
        {
            temp = temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;
        iCount++;
    }
}
