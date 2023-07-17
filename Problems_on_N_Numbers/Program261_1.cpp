#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iLength;

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
        }
};

class ArrayDerived : public ArrayX
{
    public: 

        ArrayDerived(int i) : ArrayX(i)
        {

        }
        int Addition()
        {
            int iCnt = 0;
            int iSum = 0;
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }

};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter size of array u wan to create \n";
    cin>>iValue;
    
    ArrayDerived *ptr = new ArrayDerived(iValue);
    ptr->Accept();
    ptr->Display();

    iRet = ptr->Addition();
    cout<<"\nAddition is : "<<iRet;
    return 0;
}