#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *  PNODE;

class DoublyLL
{
    public:
        PNODE First;
        int iCount;

        DoublyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);
        void Display();
};

DoublyLL :: DoublyLL()
{
    First = NULL;
    iCount = 0;
}

void DoublyLL :: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
        iCount++;

    }
}

void DoublyLL ::  InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
        iCount++;
    }
}

void DoublyLL ::  InsertAtPos(int no, int pos)
{
    if(pos < 1 || pos > iCount+1)
    {
        return;
    }
    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        int iCnt = 0;
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL; 
        PNODE temp = First;
        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        iCount++;

    }
}

void DoublyLL ::  DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        First = First->next;
        delete First->prev;
        First->prev = NULL;
        iCount--;
    }
}

void DoublyLL ::  DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
    }
    else
    {
        PNODE temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        iCount--;
    }
}

void DoublyLL ::  DeleteAtPos(int pos)
{
    if(pos < 1 || pos > iCount)
    {
        return;
    }
    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        int iCnt = 0;
        PNODE temp1 = First;
        PNODE temp2 = NULL;
        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp2->next->prev = temp1;
        temp1->next = temp2->next;
        delete temp2;
        iCount--;
    }
}

void DoublyLL ::  Display()
{
    PNODE temp = First;
    cout<<"Elements of LL are : \n";
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|<=>";
        temp = temp->next;
    }
    cout<<"NULL\n";
}


int main()
{
    DoublyLL obj1;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj1.iCount<<"\n";

    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);
    obj1.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj1.iCount<<"\n";

    obj1.InsertAtPos(105,5);
    obj1.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj1.iCount<<"\n";
    
    obj1.DeleteAtPos(5);
    obj1.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj1.iCount<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();

    obj1.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj1.iCount<<"\n";

    return 0;
}