#include<iostream>
using namespace std;
typedef unsigned int UINT;

class Bitwise
{   
    public:
    UINT iNo;
    UINT iStart;
    UINT iEnd;

    Bitwise(UINT i, UINT pos1, UINT pos2)
    {
        iNo = i;
        iStart = pos1;
        iEnd = pos2;
    }

    UINT CheckBit()
    {
        UINT iMask = 0;
        UINT iMask1 = 0XFFFFFFFF;
        UINT iMask2 = 0XFFFFFFFF;

        UINT iResult = 0;

        if((iStart < 1) || (iStart > 32) || (iEnd < 1) || (iEnd >32) )
        {
            printf("Invalid position, it should between 1 to 32\n");
            return false;
        }

        iMask1 = iMask1 << (iStart-1);
        iMask2 = iMask2 >> (32-iEnd);
        iMask = iMask1 & iMask2;

        iResult = iNo ^ iMask;

        return iResult;
    }


};
int main()
{
    UINT iValue = 0;
    UINT iPos1 = 0, iPos2 = 0;;
    UINT iRet = 0; 
    
    cout<<"Enter Number: \n";
    cin>>iValue;

    cout<<"Enter Start Position : \n";
    cin>>iPos1;

    cout<<"Enter End Position: \n";
    cin>>iPos2;

    Bitwise obj(iValue,iPos1,iPos2);

    iRet = obj.CheckBit();
    cout<<"updated no. is : "<<iRet;
    
    return 0;
}