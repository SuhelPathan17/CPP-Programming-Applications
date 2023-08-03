#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iSize = 0;
        int iValue;
        int *Arr;

        Arithematic(int i, int j)
        {
            iSize = i;
            iValue = j;
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

        int CheckLastOccurence()
        {
            int iCnt = 0;
            
            for(iCnt = iSize-1; iCnt>=0; iCnt--)
            {
                if(Arr[iCnt] == iValue);
                {   
                    break;
                }
            }

            return iCnt;
        }


};
int main()
{   
    int iNo = 0;
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the size of array :\n"
    cin>>iLength;

    cout<<"Enter the number to check :\n"
    cin>>iNo;


    Arithematic *ptr = new Arithematic(iLength,iNo);

    ptr->Accept();
    
    iRet = CheckLastOccurence();
    if(iRet == -1)
    {
        cout<<iNo<<" is not present in Array\n";
    }
    else
    {
        cout<<"Last occurence is at index "<<iRet<<"\n";
    }

    return 0;
}