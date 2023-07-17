#include<iostream>
using namespace std;

// 7 8 9

//  0000    0000    0000    0000    0000    0000    0000    0000

//  0000    0000    0000    0000    0000    0001    1100    0000

//  0       0       0       0       0       1       C       0

//  000001C0

// 0X000001C0

typedef unsigned int UINT;
class Display
{
    public:
        UINT iNo;
        Display(UINT i)
        {
            iNo = i;
        }
        bool CheckBit()
        {
            UINT iMask = 0X000001C0;
            UINT iResult = 0;

            iResult = iNo & iMask;
            if(iResult == iMask)
            {
                return true;
            }
            else
            {
                return false;
            }


        }

};
int main()
{
    UINT Value = 0;

    cout<<"Enter Number :\n";
    cin>>Value;

    Display obj(Value);

    bool bRet = obj.CheckBit();
    if(bRet == true)
    {
        cout<<"Bits are ON";
    }
    else
    {
        cout<<"Bits are OFF";
    }
    
    return 0;
}