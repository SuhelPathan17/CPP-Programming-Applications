#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int iNo;
        Arithematic(int i)
        {
            iNo = i;
        }

        int FactorsSumR()
        {
            static int iCnt = 1;
            static int iSum = 0;
            
            if(iCnt<=(iNo/2))
            {
                if((iNo % iCnt) == 0)
                {
                    iSum = iSum + iCnt;
                }
                iCnt++;
                FactorsSumR();
            }
            return iSum;
        }
};
int main()
{
    int iValue = 0, iRet = 0;
    cout<<"Enter Number  : \n";
    cin>>iValue;

    Arithematic *ptr = new Arithematic(iValue);
    iRet = ptr->FactorsSumR();
    cout<<"Summation of factors id :"<<iRet;
    

    return 0;
}