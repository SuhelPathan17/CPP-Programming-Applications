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
            // Logic
            return 0;
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