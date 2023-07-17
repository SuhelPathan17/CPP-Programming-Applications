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

        int Addition()
        {
            int iCnt = 1;
            int iSum = 0;
            while(iCnt<=iNo)
            {
                iSum = iSum + iCnt;
                iCnt++;
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
    iRet = ptr->Addition();
    cout<<"Addition is :"<<iRet;

    return 0;
}