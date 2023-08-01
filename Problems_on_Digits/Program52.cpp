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
            int iDigit = 0;
            int iSum = 0;

            while(iValue != 0)
            {
                iDigit = iValue % 10;
                iSum = iSum + iDigit;
                iValue = iValue / 10;
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