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

        int Factorial()
        {
            static int iCnt = 1;
            static int iFact = 1;
            if(iCnt<=iNo)
            {
                iFact = iFact * iCnt;
                iCnt++;
                Factorial();
            }
            return iFact;
        }
};
int main()
{
    int iValue = 0, iRet = 0;
    cout<<"Enter Number  : \n";
    cin>>iValue;

    Arithematic *ptr = new Arithematic(iValue);
    iRet = ptr->Factorial();
    cout<<"Factorial is :"<<iRet;

    return 0;
}