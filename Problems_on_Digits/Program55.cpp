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

        int CountEvenDigits()
        {
            int iEvenCnt = 0;
            int iDigit = 0;

            if(iValue == 0)
            {
                return 1;
            }

            if(iValue < 0)   // updater
            {
                iValue = -iValue;
            }

            while(iValue != 0)
            {
                iDigit = iValue % 10;
                if(iDigit % 2 == 0)
                {
                    iEvenCnt ++;
                }
                iValue = iValue / 10;
            }

            return iEvenCnt;
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

    iRet = ptr->CountEvenDigits();
    cout<<"No . of Even digits are : "<<iRet<<"\n";

    return 0;
}