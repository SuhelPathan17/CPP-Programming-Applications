#include<iostream>
using namespace std;

#pragma pack(1)
template<class T>
struct node
{
    T data;
    struct node *next;
};


template<class T>
class SinglyCL
{
    public:
        struct node<T> * First;
        struct node<T> * Last;

        SinglyCL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

template<class T>
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
}

template<class T>
void SinglyCL<T>::InsertFirst(T no)
{
    struct node<T> * newn = new struct node<T> ;

    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one node
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
}

template<class T>
void SinglyCL<T>::InsertLast(T no)
{
    struct node<T> * newn = new struct node<T> ;

    newn->data = no;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))    // Empty LL
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else    // LL contains atleast one node
    {
        (Last) -> next = newn;
        Last = newn;
        (Last)->next = First;
    }
}

template<class T>
void SinglyCL<T>::Display()
{
    struct node<T> * temp = First;

    cout<<"Elements of Linked list are : "<<"\n";

    do
    {
        cout<<"| "<<temp->data<<" |-> ";
        temp = temp -> next;
    }while(temp != Last->next);
    cout<<"\n";
}

template<class T>
int SinglyCL<T>::Count()
{
    struct node<T> * temp = First;

    int iCnt = 0;
    do
    {
        iCnt++;
        temp = temp -> next;
    }while(temp != Last->next);
    return iCnt;
}

template<class T>
void SinglyCL<T>::DeleteFirst()
{
    struct node<T> * temp = First;

    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node in LL
    {
        //free(*First);
        delete First;

        First = NULL;
        Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        First = (First)->next;
        //free(temp);
        delete temp;

        (Last) ->next = First;
    }
}

template<class T>
void SinglyCL<T>::DeleteLast()
{
    struct node<T> * temp = First;

    if((First == NULL) && (Last == NULL)) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node in LL
    { 
        delete First;

        First = NULL;
        Last = NULL;
    }
    else    // If LL contains more than 1 node
    {
        while(temp->next != (Last))
        {
            temp = temp -> next;
        }

        delete temp->next;

        Last = temp; 
        (Last) ->next = First;
    }
}

template<class T>
void SinglyCL<T>::InsertAtPos(T no, int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    iNodeCnt = Count();
    struct node<T> * newn = NULL;
    struct node<T> * temp = First;

    if((ipos < 1) || (ipos > iNodeCnt + 1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == iNodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new struct node<T> ;

        newn->data = no;
        newn->next = NULL;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

template<class T>
void SinglyCL<T>::DeleteAtPos(int ipos)
{
    int iNodeCnt = 0, iCnt = 0;
    iNodeCnt = Count();
    struct node<T> * temp1 = First;
    struct node<T> * temp2 = NULL;

    if((ipos < 1) || (ipos > iNodeCnt))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }   
        temp2 = temp1 ->next;

        temp1->next = temp2->next;
        delete temp2;
    }
}

int main()
{
    int iRet = 0;
    SinglyCL <int>obj1;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of nodes in first linkedlist are : "<<iRet<<"\n";

    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);
    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of nodes in first linkedlist are : "<<iRet<<"\n";

    obj1.InsertAtPos(105,5);
    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of nodes in first linkedlist are : "<<iRet<<"\n";
    
    obj1.DeleteAtPos(5);
    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of nodes in first linkedlist are : "<<iRet<<"\n";

    obj1.DeleteFirst();
    obj1.DeleteLast();
    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of nodes in first linkedlist are : "<<iRet<<"\n";

    SinglyCL <char>obj2;

    obj2.InsertFirst('c');
    obj2.InsertFirst('b');
    obj2.InsertFirst('a');

    obj2.Display();
    iRet = obj2.Count();
    cout<<"Number of nodes in first linkedlist are : "<<iRet<<"\n";

    obj2.InsertLast('d');
    obj2.InsertLast('e');
    obj2.InsertLast('f');
    obj2.Display();
    iRet = obj2.Count();
    cout<<"Number of nodes in first linkedlist are : "<<iRet<<"\n";

    obj2.InsertAtPos('G',5);
    obj2.Display();
    iRet = obj2.Count();
    cout<<"Number of nodes in first linkedlist are : "<<iRet<<"\n";
    
    obj2.DeleteAtPos(5);
    obj2.Display();
    iRet = obj2.Count();
    cout<<"Number of nodes in first linkedlist are : "<<iRet<<"\n";

    obj2.DeleteFirst();
    obj2.DeleteLast();
    obj2.Display();
    iRet = obj2.Count();
    cout<<"Number of nodes in first linkedlist are : "<<iRet<<"\n";
    
    return 0;
}