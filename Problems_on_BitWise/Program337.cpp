#include<iostream>
using namespace std;

// 4

//  0000    0000    0000    0000    0000    0000    0000    0000

//  1111    1111    1111    1111    1111    1111    1111    0111

//  F       F       F       F       F       F       F       7

// 0XFFFFFFF7

typedef unsigned int UINT;
class Display
{
    public:
        UINT iNo;
        Display(UINT i)
        {
            iNo = i;
        }
        UINT OFFBit()
        {
            UINT iMask = 0XFFFFFFF7;

            return(iNo & iMask);
            

        }

};
int main()
{
    UINT Value = 0;

    cout<<"Enter Number :\n";
    cin>>Value;

    Display obj(Value);

    UINT iRet = obj.OFFBit();
    cout<<"updated number is : "<<iRet;
    
    
    return 0;
}