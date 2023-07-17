#include<iostream>
using namespace std;

//  0000    1111    0000    1111    0000    1111    0000    1111
//  0       F       0       F       0       F       0       F

// 0X0F0F0F0F

typedef unsigned int UINT;
class Display
{
    public:
        UINT iNo;
        Display(UINT i)
        {
            iNo = i;
        }
        UINT ToggleBit()
        {
            UINT iMask = 0X0F0F0F0F;
            UINT iAns = 0;

            iAns = iNo ^ iMask;
            return iAns;
            

        }

};
int main()
{
    UINT Value = 0;

    cout<<"Enter Number :\n";
    cin>>Value;

    Display obj(Value);

    UINT iRet = obj.ToggleBit();
    cout<<"updated number is : "<<iRet;
    
    
    return 0;
}