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

        int MaxDigit()
        {
            int iDigit = 0;
            int iMax = 0;

            if(iValue < 0)   // updater
            {
                iValue = -iValue;
            }

            while(iValue != 0)
            {
                iDigit = iValue % 10;
                if(iDigit > iMax)
                {
                    iMax = iDigit;
                }
                iValue = iValue / 10;
            }
            return iMax;

          
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

    iRet = ptr->MaxDigit();
    cout<<"Max Digit is : "<<iRet<<"\n";

    return 0;
}