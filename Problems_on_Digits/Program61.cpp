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

        int Reverse(int iNo)
        {
            int iDigit = 0;
            int iRev = 0;

            if(iNo < 0)   // updater
            {
                iNo = -iValue;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iRev = (iRev*10) + iDigit;
                iNo = iNo / 10;
            }
            return iRev;
        }
        bool ChkPallindrome()
        {
            int iReverse = 0;
            iReverse = Reverse(iValue);

            return (iReverse == iValue);
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