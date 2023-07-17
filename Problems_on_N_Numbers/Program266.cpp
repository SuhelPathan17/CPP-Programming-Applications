#include<iostream>
using namespace std;

class ArrayX
{
    protected:
        int *Arr;
        int iLength;

    public:
        ArrayX(int iSize)
        {
            iLength = iSize;
            Arr = new int[iSize];
        }
        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
};

class ArrayDerived : public ArrayX
{
    public: 

        ArrayDerived(int i) : ArrayX(i)
        {

        }
        bool CheckPalindrome()
        {
            int iStart = 0;
            int iEnd = (this->iLength)-1;
            bool bflag = true;

            while(iStart < iEnd)
            {
                if(Arr[iStart] != Arr[iEnd])
                {
                    bflag = false;
                    break;
                }
                iStart++;
                iEnd--;
            }
            return bflag;
        }

};
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter size of array u wan to create \n";
    cin>>iValue;
    
    ArrayDerived *ptr = new ArrayDerived(iValue);
    ptr->Accept();
    ptr->Display();

    bRet = ptr->CheckPalindrome();
    if(bRet == true)
    {
        cout<<"Array is Palindrome\n";
    }
    else
    {
        cout<<"Array is not palindrome\n";
    }
    
    
    return 0;
}