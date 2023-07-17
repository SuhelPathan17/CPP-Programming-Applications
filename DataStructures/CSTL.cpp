#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////
// Structure for Singly Linear and Singly Circular
template <class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};

////////////////////////////////////////////////////////////////
// Structure for Doubly Linear and doubly Circular
template <class T>
struct nodeD
{
    T data;
    struct nodeD *next;
    struct nodeD *prev;
};

////////////////////////////////////////////////////////////////

// Class of Singly Linear Linked List
template <class T>
class SinglyLL
{
    public:
        struct nodeS<T> * First;
        int iCount;

        SinglyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

// Class of Singly Circular Linked List
template <class T>
class SinglyCL
{
    public:
        struct nodeS<T> * First;
        struct nodeS<T> * Last;

        SinglyCL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

// Class of Doubly Linear Linked List

template <class T>
class DoublyLL
{
    public:
        struct nodeD<T> * First;
        int iCount;

        DoublyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

// Class of Doubly Circular Linked List

template <class T>
class DoublyCL
{
    public:
        struct nodeD<T> * First;
        struct nodeD<T> * Last;

        DoublyCL();
        
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();
};
////////////////////////////////////////////////////////////////
template <class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct nodeS<T> * newn = new struct nodeS<T> ;
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
    struct nodeS<T> * newn = new struct nodeS<T> ;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct nodeS<T> * temp = First;
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
        struct nodeS<T> * newn = new struct nodeS<T> ;
        newn->data = no;
        newn->next = NULL; 
        struct nodeS<T> * temp = First;
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
        struct nodeS<T> * temp = First;
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
        struct nodeS<T> * temp = First;
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
        struct nodeS<T> * temp1 = First;
        struct nodeS<T> * temp2 = NULL;
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
    struct nodeS<T> * temp = First;
    cout<<"Elements of LL are : \n";
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

template <class T>
int SinglyLL<T> ::  Count()
{
    struct nodeS<T> * temp = First;
    int iCnt = 0;
    
    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}
////////////////////////////////////////////////////////////////
template<class T>
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
}

template<class T>
void SinglyCL<T>::InsertFirst(T no)
{
    struct nodeS<T> * newn = new struct nodeS<T> ;

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
    struct nodeS<T> * newn = new struct nodeS<T> ;

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
    struct nodeS<T> * temp = First;

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
    struct nodeS<T> * temp = First;

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
    struct nodeS<T> * temp = First;

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
    struct nodeS<T> * temp = First;

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
    struct nodeS<T> * newn = NULL;
    struct nodeS<T> * temp = First;

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
        newn = new struct nodeS<T> ;

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
    struct nodeS<T> * temp1 = First;
    struct nodeS<T> * temp2 = NULL;

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
////////////////////////////////////////////////////////////////
template<class T>
DoublyLL<T> :: DoublyLL()
{
    First = NULL;
    iCount = 0;
}

template<class T>
void DoublyLL<T> :: InsertFirst(T no)
{
    struct nodeD<T> * newn = new struct nodeD<T> ;
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

template<class T>
void DoublyLL<T> ::  InsertLast(T no)
{
    struct nodeD<T> * newn = new struct nodeD<T> ;
    newn->data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        struct nodeD<T> * temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
        iCount++;
    }
}

template<class T>
void DoublyLL<T> ::  InsertAtPos(T no, int pos)
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
        struct nodeD<T> * newn = new struct nodeD<T> ;
        newn->data = no;
        newn->next = NULL; 
        struct nodeD<T> * temp = First;
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

template<class T>
void DoublyLL<T> ::  DeleteFirst()
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

template<class T>
void DoublyLL<T> ::  DeleteLast()
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
        struct nodeD<T> * temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        iCount--;
    }
}

template<class T>
void DoublyLL<T> ::  DeleteAtPos(int pos)
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
        struct nodeD<T> * temp1 = First;
        struct nodeD<T> * temp2 = NULL;
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

template<class T>
void DoublyLL<T> ::  Display()
{
    struct nodeD<T> * temp = First;
    cout<<"Elements of LL are : \n";
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|<=>";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

template<class T>
int DoublyLL<T> ::  Count()
{
    struct nodeD<T> * temp = First;
    int iCnt = 0;
    
    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }
    return iCnt;
}
////////////////////////////////////////////////////
template<class T>
DoublyCL<T> :: DoublyCL()  // Default constructor
{
    First = NULL;
    Last = NULL;
}

template<class T>
void DoublyCL<T> :: InsertFirst(T no)
{
    struct nodeD<T> * newn = new struct nodeD<T> ; 

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
    struct nodeD<T> * newn = new struct nodeD<T> ; 

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
    struct nodeD<T> * temp = First;

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
    struct nodeD<T> * temp = First;

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
    struct nodeD<T> * newn = NULL;
    struct nodeD<T> * temp = NULL;
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
        newn = new struct nodeD<T> ;
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
    struct nodeD<T> * temp = NULL;
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
///////////////////////////////////////////////////

int main()
{
    
    return 0;
}