#include<iostream>
using namespace std;

#pragma pack(1)     
template<class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};


template<class T>
class DoublyCL
{
    public:
        struct node<T> * First;
        struct node<T> * Last;

        DoublyCL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

/*
Return_value Class_Name :: Function_Name(----)
{
    // Code
}
*/
template<class T>
DoublyCL<T> :: DoublyCL()  // Default constructor
{
    First = NULL;
    Last = NULL;
}

template<class T>
void DoublyCL<T> :: InsertFirst(T no)
{
    struct node<T> * newn = new struct node<T> ; 

    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((First == NULL) && (Last == NULL)) // LL is empty
    {
        First = newn;
        Last = newn;
    }
    else    // If LL contains one or more nodes
    {
        newn->next = First;
        (First)->prev = newn;
        First = newn; 
    }

    (First)->prev = Last;
    (Last)->next = First;
}

template<class T>
void DoublyCL<T> :: InsertLast(T no)
{
    struct node<T> * newn = new struct node<T> ; 

    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((First == NULL) && (Last == NULL)) // LL is empty
    {
        First = newn;
        Last = newn;
    }
    else    // If LL contains one or more nodes
    {
        (Last) -> next = newn;
        newn->prev = Last;
        Last = newn;
    }

    (First)->prev = Last;
    (Last)->next = First;
}

template<class T>
void DoublyCL<T> :: Display()
{
    struct node<T> * temp = First;

    if(First == NULL && Last == NULL)
    {
        cout<<"Linked list is empty"<<"\n";
        return;
    }

    cout<<"Elements of Linked list are : "<<"\n";
    do
    {
        cout<<"| " <<temp->data<<"|<=> ";
        temp = temp -> next;
    }while(temp != Last->next);

    cout<<"\n";
}

template<class T>
int DoublyCL<T> :: Count()
{
    int iCnt = 0;
    struct node<T> * temp = First;

    if(First == NULL && Last == NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        temp = temp -> next;
    }while(temp != Last->next);

    return iCnt;
}

template<class T>
void DoublyCL<T> :: DeleteFirst()
{
    if(First == NULL && Last == NULL) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node
    {
        delete First;
        First = NULL;
        Last= NULL;
    }
    else    // More than one node
    {
        (First) = (First) ->next;
        delete (Last)->next;        // free((*First)->prev);

        (First)->prev = Last;
        (Last)->next = First;
    }
}

template<class T>
void DoublyCL<T> :: DeleteLast()
{
    if(First == NULL && Last == NULL) // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node
    {
        delete First;
        First = NULL;
        Last= NULL;
    }
    else    // More than one node
    {
        Last = (Last) -> prev;
        delete (First)->prev;       // free((*Last)->next);

        (First)->prev = Last;
        (Last)->next = First;
    }
}

template<class T>
void DoublyCL<T> :: InsertAtPos(T no, int ipos)
{
    int iNodeCnt = Count();
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;
    int iCnt = 0;

    if((ipos < 1) || (ipos > iNodeCnt+1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos ==1)
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
        newn->prev = NULL;

        temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
    }
}

template<class T>
void DoublyCL<T> :: DeleteAtPos(int ipos)
{
    int iNodeCnt = Count();
    struct node<T> * temp = NULL;
    int iCnt = 0;

    if((ipos < 1) || (ipos > iNodeCnt))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }

    if(ipos ==1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
    }
}

int main()
{
    int iRet = 0;
    DoublyCL <int>obj1;

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

    DoublyCL <char>obj2;

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