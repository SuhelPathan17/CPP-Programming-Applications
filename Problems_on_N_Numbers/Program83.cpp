#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iSize = 0;
        int *Arr;

        Arithematic(int i)
        {
            iSize = i;
            Arr = new int[iSize];
        }

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the elements :\n";
            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;
            cout<<"Elements from Array:\n";
            for(iCnt = 0; iCnt<iSize; iCnt++)
            {
                cout<<Arr[iCnt];
            }
        }

        int Minimum()
        {
            int iCnt = 0;
            int iMin = Arr[0];
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }

            return iMin;
        }
};
int main()
{   
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the size of array :\n"
    cin>>iLength;


    Arithematic *ptr = new Arithematic(iLength);

    ptr->Accept();
    ptr->Display();

    iRet = Minimum();
    cout<<"Minimum number is : "<<iRet;


    return 0;
}