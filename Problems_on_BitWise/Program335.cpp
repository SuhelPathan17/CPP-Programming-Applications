#include<iostream>
using namespace std;


//  0000    0000    0000    0000    0000    0000    0000    0000

//  0000    0000    0000    0000    0000    1000    0000    0000

//  0       0       0       0       0       8       0       0

//  00000800

// 0X00000800

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
            UINT iMask = 0X00000800;
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
        cout<<"12th Bit is ON";
    }
    else
    {
        cout<<"12th Bit is OFF";
    }
    
    return 0;
}