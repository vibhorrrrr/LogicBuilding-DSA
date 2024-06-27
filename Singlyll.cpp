#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private:
        PNODE First;
        int iCount;

    public:
        SinglyLL(); 

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyLL::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}
 
void SinglyLL::Display()
{
    PNODE temp = First;
    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"| -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int SinglyLL::Count()
{
    return iCount;
}

void SinglyLL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)   // if(iCount==0)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL::InsertLast(int No)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = new NODE;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)   // if(iCount==0)
    {
        First = newn;
    }
    else
    {
        temp = First;
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
    iCount++;
}

void SinglyLL::InsertAtPos(int No, int iPos)
{
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = NULL;
    if((iPos<1)||(iPos>iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos==iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        temp = First;
        newn = new NODE;
        newn->data= No;
        newn->next= NULL;

        for(i=1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        iCount++;
    }

}

void SinglyLL::DeleteFirst()
{
    PNODE temp = First;
    if(First == NULL)    // iCount == 0
    {
        cout<<"Linked list is empty\n";
        return;
    }
    else if(First->next==NULL)   // iCount == 1
    {
        delete First;
    }
    else
    {
        First = First->next;
        delete temp;
    }
    iCount--;
}

