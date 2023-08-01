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

        int CountDigits()
        {
            int iDigit = 0;
            int iCnt = 0;

            if(iValue == 0)  // filter
            {
                return 1;
            }
            if(iValue < 0)   // updater
            {
                iValue = -iValue;
            }

            while(iValue > 0)
            {
                iDigit = iValue % 10;
                iCnt++;
                iValue = iValue / 10;
            }

            return iCnt;
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

    iRet = ptr->CountDigits();
    cout<<"No. of digits are : "<<iRet<<"\n";

    return 0;
}