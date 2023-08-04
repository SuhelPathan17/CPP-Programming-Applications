#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iSize;
        int *Arr;
        int iValue;

        Arithematic(int i, int j)
        {
            iSize = i;
            iValue = j;
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

        int CheckOccurence()
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                if(Arr[iCnt] == iValue)
                {
                    break;
                }
            }

            if(iCnt == iSize)
            {
                return -1;
            }
            else
            {
                return iCnt;
            }

        }


};

int main()
{
    int iLength = 0;
    int iNo = 0;
    int iRet = 0;
    Arithematic *ptr = NULL;

    cout<<"Please enter the size of array\n";
    cin>>iLength;

    cout<<"Please enter the no. to check :\n";
    cin>>iNo;

    ptr = new Arithematic(iLength,iNo);

    ptr->Accept();
    ptr->Display();

    iRet = ptr->CheckOccurence();
    if(iRet == -1)
    {
        cout<<"No. is not occured in th array\n";
    }
    else
    {
        cout<<"No. is occured in the array at index :"<<iRet<<"\n";
    }

    return 0;
}