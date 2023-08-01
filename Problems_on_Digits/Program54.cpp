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

        int SumDigits()
        {
            int iSum = 0;

            if(iValue < 0)   // updater
            {
                iValue = -iValue;
            }

            while(iValue != 0)
            {
                iSum = iSum + (iValue % 10);
                iValue /= 10;
            }

            return iSum;
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

    iRet = ptr->SumDigits();
    cout<<"SUmmation of digits are : "<<iRet<<"\n";

    return 0;
}