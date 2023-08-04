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

        int CountEven()
        {
            int iEvenCnt = 0;
            int iCnt = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iEvenCnt++;
                }
            }

            return iEvenCnt;
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

    iRet = ptr->CountEven();
    cout<<"Count of Even elements in array is : "<<iRet;

    return 0;
}