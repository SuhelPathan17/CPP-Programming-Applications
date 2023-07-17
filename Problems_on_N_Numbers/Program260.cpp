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
int main()
{
    int iValue = 0;

    cout<<"Enter size of array u wan to create \n";
    cin>>iValue;

    ArrayX *ptr = new ArrayX(iValue);
    ptr->Accept();
    ptr->Display();
    return 0;
}