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

        int CountDigitsR()
        {
            static int iCnt = 0;
            static int iTemp = iNo;
            if(iTemp != 0)
            {
                iCnt++;
                iTemp = iTemp / 10;
                CountDigitsR();
            }
            return iCnt;
        }
};
int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Number  : \n";
    cin>>iValue;

    Arithematic *ptr = new Arithematic(iValue);
    iRet = ptr->CountDigitsR();
    cout<<"No. of digits are:"<<iRet;
    
    

    return 0;
}