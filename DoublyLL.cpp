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

