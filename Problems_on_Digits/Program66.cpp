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

        int MinDigit()
        {
            int iDigit = 0;
            int iMin = 9;

            if(iValue < 0)   // updater
            {
                iValue = -iValue;
            }

            while(iValue != 0)
            {
                iDigit = iValue % 10;
                if(iDigit < iMin)
                {
                    iMin = iDigit;
                }
                
                iValue = iValue / 10;
            }
            return iMin;

          
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

    iRet = ptr->MinDigit();
    cout<<"Min Digit is : "<<iRet<<"\n";

    return 0;
}