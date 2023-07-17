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

        bool CheckArmstrong()
        {
            int Temp = iNo;
            int iDigitCount = 0;
            int iPower = 1;
            int iSum = 0, iDigit = 0;

            while(Temp != 0)
            {
                iDigitCount++;
                Temp = Temp/10;
            }
            Temp = iNo;

            while(Temp != 0)
            {
                int iCnt = 0;
                iDigit = Temp % 10;
                for(iCnt = 1; iCnt<=iDigitCount; iCnt++)
                {
                    iPower = iPower * iDigit;
                }
                iSum = iSum + iPower;
                iPower = 1;
                Temp = Temp/10;
            }
            return (iSum == iNo);
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter the Number: \n";
    cin>>iValue;

    Numbers *ptr = new Numbers(iValue);
    bRet = ptr->CheckArmstrong();
    if(bRet == true)
    {
        cout<<"No. is Armstrong number";
    }
    else
    {
        cout<<"No. is not Armstrong number";
    }
    

    return 0;
}