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

        int CalculateFrequency()
        {
            int iCnt = 0;
            int iFrequency = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                if(Arr[iCnt] == iValue)
                {
                    iFrequency++;
                }
            }

            return iFrequency;

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

    cout<<"Please enter the no. whose frequency to be calculated :\n";
    cin>>iNo;

    ptr = new Arithematic(iLength,iNo);

    ptr->Accept();
    ptr->Display();

    iRet = ptr->CalculateFrequency();
    cout<<"Frequency of "<<iNo<<" is : "<<iRet<<"\n";

    return 0;
}