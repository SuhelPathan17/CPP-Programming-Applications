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

        bool ChkPallindrome()
        {
            int iDigit = 0;
            int iRev = 0;
            int iTemp = iValue;

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

            if(iRev == iTemp)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{   
    int iNo = 0;
    bool bRet = 0;
    Digits *ptr = NULL;

    cout<<"Please enter number :\n";
    cin>>iNo;

    ptr = new Digits(iNo);

    bRet = ptr->ChkPallindrome();
    if(bRet == true)
    {
        cout<<iNo<<" is Pallindrome\n";
    }
    else
    {
        cout<<iNo<<" is not Pallindrome\n";
    }
    return 0;
}