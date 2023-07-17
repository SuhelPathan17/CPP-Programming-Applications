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

        int AdditionR()
        {
            static int iCnt = 1;
            static int iSum = 0;
            if(iCnt<=iNo)
            {
                iSum = iSum + iCnt;
                iCnt++;
                AdditionR();
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
    iRet = ptr->AdditionR();
    cout<<"Addition is :"<<iRet;

    return 0;
}