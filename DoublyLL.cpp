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

void DoublyLL::DeleteFirst() {
    if (First == NULL) 
    { // iCount == 0
        cout << "Linked list is empty\n";
        return;
    }

    if (First->next == NULL) 
    { // iCount == 1
        delete First;
        First = NULL;
    } 
    else 
    {
        PNODE temp = First;
        First = First->next;
        delete temp;
        First->prev = NULL;
    }
    iCount--;
}

void DoublyLL::DeleteLast() 
{
    if (First == NULL) 
    { // iCount == 0
        cout << "Linked list is empty\n";
        return;
    }

    if (First->next == NULL) 
    { // iCount == 1
        delete First;
        First = NULL;
    } 
    else 
    {
        PNODE temp = First;
        while (temp->next->next != NULL) 
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void DoublyLL::DeleteAtPos(int iPos) 
{
    if (iPos < 1 || iPos > iCount) 
    {
        cout << "Invalid Position\n";
        return;
    }

    if (iPos == 1) 
    {
        DeleteFirst();
    } 
    else if (iPos == iCount) 
    {
        DeleteLast();
    } 
    else 
    {
        PNODE temp = First;
        for (int i = 1; i < iPos - 1; i++) 
        {
            temp = temp->next;
        }

        PNODE targ = temp->next;
        temp->next = targ->next;
        if (targ->next != NULL) 
        {
            targ->next->prev = temp;
        }
        delete targ;

        iCount--;
    }
}

int main() 
{
    DoublyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    iRet = obj.Count();
    cout << "Number of elements are: " << iRet << endl;

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.Display();

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout << "Number of elements are: " << iRet << endl;

    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    cout << "Number of elements are: " << iRet << endl;

    obj.InsertAtPos(105, 5);
    obj.Display();
    iRet = obj.Count();
    cout << "Number of elements are: " << iRet << endl;

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.Count();
    cout << "Number of elements are: " << iRet << endl;

    return 0;
}

