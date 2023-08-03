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

        void DisplayReverse()
        {
            int iCnt = 0;
            cout<<"Elements from Array:\n";
            for(iCnt = iSize-1; iCnt>=0; iCnt--)
            {
                cout<<Arr[iCnt];
            }
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
    ptr->DisplayReverse();




    return 0;
}