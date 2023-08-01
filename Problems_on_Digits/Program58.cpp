// Template

#include<iostream>
using namespace std;


class Digits
{
    public:
        int iValue;

        Digits(int i)
        {
            iValue = i;
        }

        int Reverse()
        {
            int iDigit = 0;
            int iRev = 0;

            if(iValue < 0)   // updater
            {
                iValue = -iValue;
            }

            while(iValue != 0)
            {
                iDigit = iValue % 10;
                iRev = (iRev*10) + iDigit;
                iValue = iValue / 10;
            }

            return iRev;
        }
};

int main()
{   
    int iNo = 0;
    int iRet = 0;
    Digits *ptr = NULL;

    cout<<"Please enter number :\n";
    cin>>iNo;

    ptr = new Digits(iNo);

    iRet = ptr->Reverse();
    cout<<"Reverse of "<<iNo<<" is : "<<iRet<<"\n";
    return 0;
}