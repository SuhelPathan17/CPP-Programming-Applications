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

        void CountOddEvenDigits()
        {
            int iEvenCnt = 0;
            int iOddCnt = 0;
            int iDigit = 0;

            if(iValue == 0)
            {
                cout<<"No. of even digits are : 1\n";
                cout<<"No. of odd digits are : 0\n";
                return;
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
                else
                {
                    iOddCnt++;
                }
                iValue = iValue / 10;
            }

            cout<<"No. of even digits are : "<<iEvenCnt<<"\n";
            cout<<"No. of odd digits are : "<<iOddCnt<<"\n";

            
        }
};

int main()
{   
    int iNo = 0;
    Digits *ptr = NULL;

    cout<<"Please enter number :\n";
    cin>>iNo;

    ptr = new Digits(iNo);

    ptr->CountOddEvenDigits();

    return 0;
}