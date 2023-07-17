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

        int FactorsMultiplication()
        {
            int iCnt = 0;
            int iMult = 1;

            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                        iMult = iMult * iCnt;
                }
            }
            return iMult;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number: \n";
    cin>>iValue;

    Numbers *ptr = new Numbers(iValue);
    iRet = ptr->FactorsMultiplication();
    cout<<"Multiplication of factors is : "<<iRet<<" \n";

    return 0;
}