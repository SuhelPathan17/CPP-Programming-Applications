#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo = i;
        }

        int CountDigits()
        {
            int iCnt = 0;
            while(iNo != 0)
            {
                iCnt++;
                iNo = iNo/10;
            }
            return iCnt;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number: \n";
    cin>>iValue;

    Numbers *ptr = new Numbers(iValue);
    iRet = ptr->CountDigits();
    cout<<"No. of Digits is : "<<iRet<<" \n";

    return 0;
}