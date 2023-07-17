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
        bool CheckBit()
        {
            UINT iMask = 8;
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
        cout<<"4th Bit is ON";
    }
    else
    {
        cout<<"4th Bit is OFF";
    }
    
    return 0;
}