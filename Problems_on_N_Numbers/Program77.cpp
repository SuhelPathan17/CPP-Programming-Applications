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

        void DisplayEvenOddSum()
        {
            int iEvenSum = 0;
            int iOddSum = 0;
            int iCnt = 0;

            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iEvenSum = iEvenSum + Arr[iCnt];
                }
                else
                {
                    iOddSum = iOddSum + Arr[iCnt];
                }
            }

            cout<<"Sum of Even no. of elements in array are : "<<iOddSum<<"\n";
            cout<<"Sum of Odd no. of elements in array are : "<<iEvenSum<<"\n";
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

    ptr->DisplayEvenOddSum();


    return 0;
}