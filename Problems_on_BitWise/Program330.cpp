#include<iostream>
using namespace std;

typedef unsigned int UINT;
class Display
{
    public:
        UINT iNo;
        Display(UINT i)
        {
            iNo = i;
        }
        int CountOnBits()
        {
            int Digit = 0;
            int iCnt = 0;
            while(iNo != 0)
            {
                Digit = iNo % 2;
                iCnt = iCnt + Digit;
                iNo = iNo / 2;
            }
            return iCnt;
        }

};
int main()
{
    UINT Value = 0;

    cout<<"Enter Number :\n";
    cin>>Value;

    Display obj(Value);

    int iRet = obj.CountOnBits();
    cout<<"No. of Bits are : "<<iRet;
    return 0;
}