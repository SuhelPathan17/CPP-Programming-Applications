#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *  PNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);
        void Display();
};

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else
    {
        newn->next = First;
        First = newn;
        iCount++;

    }
}

void SinglyLL ::  InsertLast(int no)
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
        iCount++;
    }
}

void SinglyLL ::  InsertAtPos(int no, int pos)
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
        temp->next = newn;
        iCount++;

    }
}

void SinglyLL ::  DeleteFirst()
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
        First = First->next;
        delete temp;
        iCount--;
    }
}

void SinglyLL ::  DeleteLast()
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

void SinglyLL ::  DeleteAtPos(int pos)
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
        temp1->next = temp2->next;
        delete temp2;
        iCount--;
    }
}

void SinglyLL ::  Display()
{
    PNODE temp = First;
    cout<<"Elements of LL are : \n";
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}


int main()
{
    SinglyLL obj1;

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