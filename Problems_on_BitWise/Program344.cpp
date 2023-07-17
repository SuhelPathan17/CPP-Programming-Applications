#include<iostream>
using namespace std;
typedef unsigned int UINT;

class Bitwise
{   
    public:
    UINT iNo;
    UINT iPos;

    Bitwise(UINT i, UINT pos)
    {
        iNo = i;
        iPos = pos;
    }

    UINT CheckBit()
    {
        UINT iMask = 0X00000001;
        UINT iResult = 0;

        if((iPos < 1) || (iPos > 32))
        {
            printf("Invalid position, it should between 1 to 32\n");
            return false;
        }

        iMask = iMask << (iPos-1);
        iMask = ~iMask;
        iResult = iNo & iMask;

        return iResult;
    }


};
int main()
{
    UINT iValue = 0;
    UINT iPos = 0;
    UINT iRet = false; 
    
    cout<<"Enter Number: \n";
    cin>>iValue;

    cout<<"Enter Position: \n";
    cin>>iPos;

    Bitwise obj(iValue,iPos);
    iRet = obj.CheckBit();
    cout<<"Updated no. is :"<<iRet;
    
    return 0;
}