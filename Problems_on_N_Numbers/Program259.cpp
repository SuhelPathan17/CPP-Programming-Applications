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
    int iValue = 5;
    ArrayX *ptr = new ArrayX(iValue);
    ptr->Accept();
    ptr->Display();
    return 0;
}