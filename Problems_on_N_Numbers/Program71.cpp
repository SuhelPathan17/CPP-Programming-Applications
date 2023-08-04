#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iSize;
        int *Arr;

        Arithematic(int i)
        {
            iSize = i;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter the elemets : \n";

            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements from array are : \n";
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        int Summation()
        {
            int iSum = 0;
            int iCnt = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }


};

int main()
{
    int iNo = 0;
    int iRet = 0;
    Arithematic *ptr = NULL;

    cout<<"Please enter the size of array\n";
    cin>>iNo;

    ptr = new Arithematic(iNo);

    ptr->Accept();
    ptr->Display();

    iRet = ptr->Summation();
    cout<<"Summation is : "<<iRet;

    return 0;
}