#include<iostream>
using namespace std;

class Display
{
    public:
        unsigned int iNo;
        Display(unsigned int i)
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
                if(Digit==1)
                {
                    iCnt++;
                }
                iNo = iNo / 2;
            }
            return iCnt;
        }

};
int main()
{
    unsigned int Value = 0;

    cout<<"Enter Number :\n";
    cin>>Value;

    Display obj(Value);

    int iRet = obj.CountOnBits();
    cout<<"No. of ON Bits are : "<<iRet;
    return 0;
}