#include<iostream>
using namespace std;
typedef unsigned int UINT;

class Bitwise
{   
    public:
    UINT iNo;
    UINT iPos2;
    UINT iPos1;

    Bitwise(UINT i, UINT pos1, UINT pos2)
    {
        iNo = i;
        iPos1 = pos1;
        iPos2 = pos2;
    }

    bool CheckBit()
    {
        UINT iMask = 0;
        UINT iMask1 = 0X00000001;
        UINT iMask2 = 0X00000001;

        UINT iResult = 0;

        if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 >32) )
        {
            printf("Invalid position, it should between 1 to 32\n");
            return false;
        }

        iMask1 = iMask1 << (iPos1-1);
        iMask2 = iMask2 << (iPos2-1);
        iMask = iMask1 | iMask2;

        iResult = iNo & iMask;

        return (iResult == iMask);
    }


};
int main()
{
    UINT iValue = 0;
    UINT iPos1 = 0, iPos2 = 0;;
    bool bRet = false; 
    
    cout<<"Enter Number: \n";
    cin>>iValue;

    cout<<"Enter Position 1: \n";
    cin>>iPos1;

    cout<<"Enter Position 2: \n";
    cin>>iPos2;

    Bitwise obj(iValue,iPos1,iPos2);

    bRet = obj.CheckBit();
    if(bRet == true)
    {
        cout<<"Bit at position "<<iPos1<<"And"<<iPos2<<" are ON";
    }
    else
    {
        cout<<"Bit at position "<<iPos1<<" And "<<iPos2<<" are OFF";
    }
    return 0;
}