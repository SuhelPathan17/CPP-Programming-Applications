#include<iostream>
using namespace std;

#pragma pack(1)
template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
    public:
        struct node<T> * First;
        int iCount;

        SinglyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int pos);
        void Display();
};

template <class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct node<T> * newn = new struct node<T> ;
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

template <class T>
void SinglyLL<T> ::  InsertLast(T no)
{
    struct node<T> * newn = new struct node<T> ;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct node<T> * temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T> ::  InsertAtPos(T no, int pos)
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
        struct node<T> * newn = new struct node<T> ;
        newn->data = no;
        newn->next = NULL; 
        struct node<T> * temp = First;
        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;

    }
}

template <class T>
void SinglyLL<T> ::  DeleteFirst()
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
        struct node<T> * temp = First;
        First = First->next;
        delete temp;
        iCount--;
    }
}

template <class T>
void SinglyLL<T> ::  DeleteLast()
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
        struct node<T> * temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        iCount--;
    }
}

template <class T>
void SinglyLL<T> ::  DeleteAtPos(int pos)
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
        struct node<T> * temp1 = First;
        struct node<T> * temp2 = NULL;
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

template <class T>
void SinglyLL<T> ::  Display()
{
    struct node<T> * temp = First;
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
    SinglyLL <int>obj1;

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

    SinglyLL <char>obj2;

    obj2.InsertFirst('c');
    obj2.InsertFirst('b');
    obj2.InsertFirst('a');

    obj2.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj2.iCount<<"\n";

    obj2.InsertLast('d');
    obj2.InsertLast('e');
    obj2.InsertLast('f');
    obj2.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj2.iCount<<"\n";

    obj2.InsertAtPos('G',5);
    obj2.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj2.iCount<<"\n";
    
    obj2.DeleteAtPos(5);
    obj2.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj2.iCount<<"\n";

    obj2.DeleteFirst();
    obj2.DeleteLast();
    obj2.Display();
    cout<<"Number of nodes in first linkedlist are : "<<obj2.iCount<<"\n";

    return 0;
}